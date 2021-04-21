#include "ControladorIniciarVenta.hpp"
#include "ManejadorEmpleado.hpp"
#include "ManejadorVenta.hpp"
#include "ManejadorMesa.hpp"
#include "DtProductoCantidad.hpp"
#include "DtProductoBase.hpp"
#include "VentaLocal.hpp"
#include "Mozo.hpp"

using namespace std;

ControladorIniciarVenta::ControladorIniciarVenta(){};

list<int> ControladorIniciarVenta::ingresarIdMozo(string idMozo){
    this->mozo = idMozo;
    ManejadorEmpleado* mE=ManejadorEmpleado::getInstancia();
    if(mE->existeEmpleado(idMozo)){
        Mozo *mo = dynamic_cast<Mozo*>((mE->getEmpleado(idMozo)));
        list<int> mesas=mo->mesasAsignadasSinVenta();
        return mesas;
    }else{
        throw invalid_argument("NO EXISTE MOZO CON ESE IDENTIFICADOR");
    }
}

void ControladorIniciarVenta::seleccionarMesa(list<int> idMesas) {
    this->mesas = idMesas;
}

void ControladorIniciarVenta::confirmarIniciarVenta(){
    ManejadorEmpleado* mE=ManejadorEmpleado::getInstancia();
    Mozo *mo = dynamic_cast<Mozo*>((mE->getEmpleado(this->mozo)));
    ManejadorVenta* mV=ManejadorVenta::getInstancia();
    std::string codVenta = to_string(mV->getUniqueCodVenta());
    VentaLocal* vl=new VentaLocal(codVenta,mo);
    mV->agregarVenta(vl);
    mo->asignarMesas(this->mesas, vl);     
}

void ControladorIniciarVenta::cancelarIniciarVenta(){
    this->mesas.clear();
    this->mozo.clear();
}

ControladorIniciarVenta::~ControladorIniciarVenta(){};
