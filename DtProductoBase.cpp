#include "DtProductoBase.hpp"

DtProductoBase::DtProductoBase(){}
DtProductoBase::DtProductoBase(string codigo,string desc){
    this->codigo = codigo;
    this->descripcion = desc;
}
string DtProductoBase::getCodigo(){
    return this->codigo;
}
string DtProductoBase::getDescripcion(){
    return this->descripcion;
}
DtProductoBase::~DtProductoBase(){}

ostream& operator <<(ostream& salida,const DtProductoBase& dtpb){
	cout << "Codigo: " << dtpb.codigo <<  " ";
	cout << "Descripcion: " << dtpb.descripcion << endl;
	return salida;
}