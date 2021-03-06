#include "ControladorFacturar.hpp"
#include "ManejadorProducto.hpp"
#include "ManejadorVenta.hpp"
#include "ManejadorMesa.hpp"
#include "VentaLocal.hpp"
#include "Factura.hpp"

using namespace std;

ControladorFacturar::ControladorFacturar(){};

// No coinciden las definiciones con el pseudocodigo, pero mas que nada no entiendo para que se le pasa 'codVenta' a Factura.
// VentaLocal no tiene ninguna función 'setFactura' (la visibilidad no está representada) 
// -Nic-
// La factura se crea con codVenta, es el controlador el que tiene visibilidad sobre VentaLocal y Mesa. Factura tiene un getcodVenta para crear un identificador
// identico al de la VentaLocal asociada
// -Rodrigo-

DtFacturaLocal ControladorFacturar::facturar(int idMesa, float descuento){
    ManejadorMesa* mM = ManejadorMesa::getInstancia();
    Mesa* me = mM->getMesa(idMesa);
    VentaLocal* v = me->getVentaLocal();
    if(v!= NULL){
        list<DtProductoFactura> dtProductos = v->getDtProductoFactura();
        if (!dtProductos.empty()){
            float subtotal = v->getSubTotalVenta();
            string codVenta = v->getCodigo();
            Factura* f = new Factura(subtotal,dtProductos,descuento,codVenta);
            v->setFactura(f);
            string nomMozo = v->getNombreMozo();
            DtFechaHora fh = f->getFechaHora();
            DtFacturaLocal dtf = DtFacturaLocal(codVenta,fh,descuento,dtProductos,subtotal,(subtotal-subtotal*(descuento/100)),(subtotal-subtotal*(descuento/100))*1.22,nomMozo);
            list<Mesa*> lstMesa = mM->getMesas();
            for (list<Mesa*>::iterator it=lstMesa.begin(); it!=lstMesa.end(); ++it){
                if(v == (*it)->getVentaLocal()){
                    (*it)->setVentaLocal(NULL);
                }
            }
            return dtf;
        }
        else{
            throw invalid_argument("ERROR: LA VENTA A FACTURAR NO TIENE PRODUCTOS\n");
        }
    }else{
        throw invalid_argument("ERROR: ESTA MESA NO TIENE VENTA ASOCIADA\n");
    }
}

ControladorFacturar::~ControladorFacturar(){};