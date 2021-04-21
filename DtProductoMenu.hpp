#ifndef DTPRODUCTOMENU
#define DTPRODUCTOMENU
#include "DtProducto.hpp"
#include "DtProductoComun.hpp"
#include <iostream>
#include <list>
using namespace std;

class DtProductoMenu: public DtProducto{
    private:
        list<DtProductoComun*> productos;
    public:
        DtProductoMenu();
        DtProductoMenu(string,string,float,int,list<DtProductoComun*>);
        list<DtProductoComun*> getProductos();
        virtual ~DtProductoMenu();
        friend ostream& operator <<(ostream&,const DtProductoMenu&);
};
#endif