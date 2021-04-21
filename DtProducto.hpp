#ifndef DTPRODUCTO
#define DTPRODUCTO
#include "DtProductoBase.hpp"
#include <iostream>
using namespace std;

class DtProducto: public DtProductoBase{
    private:
        float precio;
        int cantidad;
    public:
        DtProducto();
        DtProducto(string,string,float,int);
        float getPrecio();
        int getCantidad();
        virtual ~DtProducto();
        friend ostream& operator <<(ostream&,const DtProducto&);
};
#endif