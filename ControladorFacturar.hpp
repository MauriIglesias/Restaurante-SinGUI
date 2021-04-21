#ifndef CONTROLADORFACTURAR
#define CONTROLADORFACTURAR
#include "IControladorFacturar.hpp"
#include <list>

using namespace std;

class ControladorFacturar: public IControladorFacturar{
    public:
        ControladorFacturar();
        DtFacturaLocal facturar(int, float);
        ~ControladorFacturar();
};

#endif