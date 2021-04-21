#ifndef CONTROLADORINICIARVENTA
#define CONTROLADORINICIARVENTA
#include "IControladorIniciarVenta.hpp"
#include <list>

using namespace std;

class ControladorIniciarVenta: public IControladorIniciarVenta{
private:
    string mozo;
    list<int> mesas;
public:
    ControladorIniciarVenta();
    list<int> ingresarIdMozo(string);
    void seleccionarMesa(list<int>);
    void confirmarIniciarVenta();
    void cancelarIniciarVenta();
    ~ControladorIniciarVenta();
};
#endif
