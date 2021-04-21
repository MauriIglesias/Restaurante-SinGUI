#ifndef FABRICA
#define FABRICA
#include "IControladorAltaProducto.hpp"
#include "IControladorAgregarProducto.hpp"
#include "IControladorBajaProducto.hpp"
#include "IControladorQuitarProducto.hpp"
#include "IControladorIniciarVenta.hpp"
#include "IControladorFacturar.hpp"
#include "IControladorCargarDatos.hpp"
class Fabrica{
    private:
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IControladorAltaProducto* getIControladorAltaProducto();
        IControladorBajaProducto* getIControladorBajaProducto();
        IControladorAgregarProducto* getIControladorAgregarProducto();
        IControladorQuitarProducto* getIControladorQuitarProducto();
        IControladorIniciarVenta* getIControladorIniciarVenta();
        IControladorFacturar* getIControladorFacturar();
        IControladorCargarDatos* getIControladorCargarDatos();
        ~Fabrica();
};
#endif
