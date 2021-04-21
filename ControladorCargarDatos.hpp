#ifndef CONTROLADORCARGAR
#define CONTROLADORCARGAR
#include "IControladorCargarDatos.hpp"

using namespace std;

class ControladorCargarDatos: public IControladorCargarDatos{
    public:
        ControladorCargarDatos();
        void cargarDatos();
        ~ControladorCargarDatos();
};
#endif
