#include "Fabrica.hpp"
#include "ControladorAltaProducto.hpp"
#include "ControladorAgregarProducto.hpp"
#include "ControladorBajaProducto.hpp"
#include "ControladorQuitarProducto.hpp"
#include "ControladorIniciarVenta.hpp"
#include "ControladorFacturar.hpp"
#include "ControladorCargarDatos.hpp"

Fabrica* Fabrica::instancia = NULL;

Fabrica::Fabrica(){}

Fabrica* Fabrica::getInstancia(){
    if (instancia == NULL) 
        instancia = new Fabrica();
    return instancia;
}

IControladorAltaProducto* Fabrica::getIControladorAltaProducto(){
    return new ControladorAltaProducto();    
}

IControladorAgregarProducto* Fabrica::getIControladorAgregarProducto(){
    return new ControladorAgregarProducto();    
}

IControladorBajaProducto* Fabrica::getIControladorBajaProducto(){
    return new ControladorBajaProducto();    
}

IControladorQuitarProducto* Fabrica::getIControladorQuitarProducto(){
    return new ControladorQuitarProducto();    
}

IControladorIniciarVenta* Fabrica::getIControladorIniciarVenta(){
    return new ControladorIniciarVenta();    
}

IControladorFacturar* Fabrica::getIControladorFacturar(){
    return new ControladorFacturar();    
}

IControladorCargarDatos* Fabrica::getIControladorCargarDatos(){
    return new ControladorCargarDatos();    
}

Fabrica::~Fabrica(){}
