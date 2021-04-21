#ifndef ICONTROLADORFACTURAR
#define ICONTROLADORFACTURAR
#include <iostream>
#include "DtFacturaLocal.hpp"

using namespace std;

class IControladorFacturar{
    public:
        virtual DtFacturaLocal facturar(int, float) = 0;
};
#endif