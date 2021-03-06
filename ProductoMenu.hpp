#ifndef PRODUCTOMENU
#define PRODUCTOMENU
#include <iostream>
#include "Comun.hpp"
using namespace std;

class ProductoMenu{
    private:
        int cantidad;
        Comun* comun;
    public:
        ProductoMenu();
        ProductoMenu(int);
        int getCant();
        string getCodigoComun();
        string getDescComun();
        void asignarComun(string);
        float getPrecio();
        Comun* getComun();
        ~ProductoMenu();
};
#endif