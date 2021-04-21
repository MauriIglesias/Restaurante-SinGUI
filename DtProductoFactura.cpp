#include "DtProductoFactura.hpp"

DtProductoFactura::DtProductoFactura(){}
DtProductoFactura::DtProductoFactura(string descripcion,float precio,int cantidad){
    this->descripcion=descripcion;
    this->cantidad=cantidad;
    this->precio=precio;
}

string DtProductoFactura::getDescripcion(){
    return this->descripcion;
}
float DtProductoFactura::getPrecio(){
    return this->precio;
}
int DtProductoFactura::getCantidad(){
    return this->cantidad;
}

ostream& operator <<(ostream& salida,const DtProductoFactura& dpf){
	cout << "Descripcion: " << dpf.descripcion << "\tPrecio: " << dpf.precio << "\tCantidad: " << dpf.cantidad <<endl;
	return salida;
}

DtProductoFactura::~DtProductoFactura(){}
