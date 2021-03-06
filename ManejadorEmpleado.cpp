#include "ManejadorEmpleado.hpp"
#include "Empleado.hpp"
#include <list>
#include <map>
#include <iostream>

using namespace std;

ManejadorEmpleado* ManejadorEmpleado:: instancia = NULL;

ManejadorEmpleado::ManejadorEmpleado(){}

ManejadorEmpleado* ManejadorEmpleado:: getInstancia(){
    if (instancia == NULL) {
        instancia = new ManejadorEmpleado();
    }
    return instancia;
}

list<Empleado*> ManejadorEmpleado:: getEmpleados(){
    list<Empleado*> lstEmpleados;
    for (map<string,Empleado*>::iterator it=this->empleados.begin();it!=empleados.end(); ++it){
        lstEmpleados.push_back(it->second);
    }
    return lstEmpleados;
}

Empleado* ManejadorEmpleado:: getEmpleado(string em){
    map<string,Empleado*>::iterator it = this->empleados.find(em);
    return it->second;
}

void ManejadorEmpleado:: removerEmpleado(Empleado* em){
    map<string,Empleado*>::iterator it = this->empleados.find(em->getIdEmpleado());
    this->empleados.erase(it);
}

void ManejadorEmpleado:: agregarEmpleado(Empleado* em){
    empleados.insert(std::pair<string,Empleado*>(em->getIdEmpleado(), em));
}

bool ManejadorEmpleado:: existeEmpleado(string em){
    map<string,Empleado*>::iterator it = this->empleados.find(em); 
    return (it != this->empleados.end());
}

ManejadorEmpleado::~ManejadorEmpleado(){}
