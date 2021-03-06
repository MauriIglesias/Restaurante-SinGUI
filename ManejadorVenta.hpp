#ifndef MANEJADORVENTA
#define MANEJADORVENTA
#include "Venta.hpp"
#include <iostream>
#include <list>
#include <map>

using namespace std;

class ManejadorVenta{
    private:
        static ManejadorVenta* instancia;
        map<string,Venta*> ventas;
        ManejadorVenta();
        int uniqueCodVenta;
    public:
        static ManejadorVenta* getInstancia();
        list<Venta*> getVentas();
        Venta* getVenta(string);
        void removerVenta(Venta*);
        void agregarVenta(Venta*);
        int getUniqueCodVenta ();
        virtual ~ManejadorVenta();
};

#endif