#include "DtProductoCantidad.hpp"

DtProductoCantidad::DtProductoCantidad(){}
DtProductoCantidad::DtProductoCantidad(string codigo, int cantidad){
    this->codigo=codigo;
    this->cantidad=cantidad;
}
string DtProductoCantidad::getCodigo(){
    return this->codigo;
}
int DtProductoCantidad::getCantidad(){
    return this->cantidad;
}
DtProductoCantidad::~DtProductoCantidad(){}