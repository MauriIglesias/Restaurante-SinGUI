#include "ManejadorProducto.hpp"
#include "Producto.hpp"
#include <list>
#include <map>
#include <iostream>

using namespace std;

ManejadorProducto* ManejadorProducto:: instancia = NULL;

ManejadorProducto::ManejadorProducto(){}

ManejadorProducto* ManejadorProducto:: getInstancia(){
    if (instancia == NULL) {
        instancia = new ManejadorProducto();
    }
    return instancia;
}

list<Producto*> ManejadorProducto:: getProductos(){
    list<Producto*> lstProductos;
    for (map<string,Producto*>::iterator it=this->productos.begin();it!=productos.end(); ++it){
        lstProductos.push_back(it->second);
    }
    return lstProductos;
}

Producto* ManejadorProducto:: getProducto(string pro){
    map<string,Producto*>::iterator it = this->productos.find(pro);
    return it->second;
}

void ManejadorProducto:: removerProducto(Producto* pro){
    map<string,Producto*>::iterator it = this->productos.find(pro->getCodigo());
    this->productos.erase(it);
}

void ManejadorProducto:: agregarProducto(Producto* pro){
    productos.insert(std::pair<string,Producto*>(pro->getCodigo(), pro));
}

bool ManejadorProducto::existeProducto(string producto) {
    map<string,Producto*>::iterator it  = this->productos.find(producto);
    return (it != this->productos.end());
}

ManejadorProducto::~ManejadorProducto(){}
