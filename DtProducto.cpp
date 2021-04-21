#include "DtProducto.hpp"

DtProducto::DtProducto(){}
DtProducto::DtProducto(string codigo,string desc,float precio,int cant):DtProductoBase(codigo, desc){
    this->precio = precio;
    this->cantidad = cant;
}
float DtProducto::getPrecio(){
    return this->precio;
}
int DtProducto::getCantidad(){
    return this->cantidad;
}

ostream& operator <<(ostream& salida,const DtProducto& dtpb){
	cout << (DtProductoBase)dtpb <<"Precio: " << dtpb.precio <<  " ";
	cout << "Cantidad: " << dtpb.cantidad << endl;
	return salida;
}

DtProducto::~DtProducto(){}