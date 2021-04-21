#ifndef VENTA
#define VENTA
#include "VentaProducto.hpp"
#include "Factura.hpp"
#include <iostream>
#include <list>

using namespace std;

class Venta{
    private:
        string codigo;
        list<VentaProducto*> ventaProductos;
        Factura* factura;
    public:
        Venta();
        Venta(string);
        string getCodigo();
        void setCodigo(string);
        list<VentaProducto*> getVentaProductos();
        void setVentaProductos (list<VentaProducto*>);
        Factura * getFactura();
        void setFactura (Factura*);
        virtual void eliminarProducto (string)=0;
        ~Venta();
};
#endif