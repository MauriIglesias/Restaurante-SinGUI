#ifndef MESA
#define MESA
#include <stdio.h>
#include <list>
#include "DtProductoCantidad.hpp"
#include "VentaLocal.hpp"
#include "DtProductoCantidad.hpp"
using namespace std;

class Mozo;
class VentaLocal;
class Mesa{
    private:
        int numero;
        VentaLocal* ventaLocal;
    public:
        Mesa();
        Mesa(int);
        int getNumero();
        void setNumero(int);
        VentaLocal* getVentaLocal();
        void setVentaLocal(VentaLocal*);
        bool tieneVenta();
        void agregarProducto(DtProductoCantidad);
        list<DtProducto> listarProductos();
        void quitarProducto(DtProductoCantidad);
        ~Mesa();
};
#endif