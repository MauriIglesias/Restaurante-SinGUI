#ifndef MANEJADOREMPLEADO
#define MANEJADOREMPLEADO
#include "Empleado.hpp"
#include <iostream>
#include <map>
#include <list>

using namespace std;

class ManejadorEmpleado{
    private:
        static ManejadorEmpleado* instancia;
        map<string,Empleado*> empleados;
        ManejadorEmpleado();
    public:
        static ManejadorEmpleado* getInstancia();
        list<Empleado*> getEmpleados();
        Empleado* getEmpleado(string);
        void removerEmpleado(Empleado*);
        void agregarEmpleado(Empleado*);
        virtual ~ManejadorEmpleado();
        bool existeEmpleado(string);
};

#endif