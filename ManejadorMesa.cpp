#include "ManejadorMesa.hpp"
#include "Mesa.hpp"
#include <list>
#include <map>
#include <iostream>

using namespace std;

ManejadorMesa* ManejadorMesa::instancia = NULL;

ManejadorMesa::ManejadorMesa(){}

ManejadorMesa* ManejadorMesa:: getInstancia(){
    if (instancia == NULL) {
        instancia = new ManejadorMesa();
    }
    return instancia;
}

list<Mesa*> ManejadorMesa:: getMesas(){
    list<Mesa*> lstMesas;
    for (map<int,Mesa*>::iterator it=this->mesas.begin();it!=mesas.end(); ++it){
        lstMesas.push_back(it->second);
    }
    return lstMesas;
}

Mesa* ManejadorMesa:: getMesa(int me){
    map<int,Mesa*>::iterator it = this->mesas.find(me);
    return it->second;
}

void ManejadorMesa:: removerMesa(Mesa* me){
    map<int,Mesa*>::iterator it = this->mesas.find(me->getNumero());
    this->mesas.erase(it);
}

void ManejadorMesa:: agregarMesa(Mesa* me){
    mesas.insert(std::pair<int,Mesa*>(me->getNumero(), me));
}

bool ManejadorMesa:: mesaTieneVenta(int idMesa){
    return getMesa(idMesa)->tieneVenta();
}

ManejadorMesa::~ManejadorMesa(){}
