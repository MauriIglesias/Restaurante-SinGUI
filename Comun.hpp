#ifndef COMU
#define COMU
#include <iostream>
#include "Producto.hpp"
using namespace std;

class Comun: public Producto{
    public:
        Comun();
        Comun(string,float,string);
        TipoProducto getTipoProducto();
        ~Comun();
};
#endif