#include "Menu.hpp"

Menu::Menu(){}
Menu::Menu(string codigo,float precio,string desc,int cant):Producto(codigo,precio,desc){
    cantComunes = cant;
}
void Menu::setCantComunes(int cant){
    this->cantComunes = cant;
}
int Menu::getCantComunes(){
    return this->cantComunes;
}
TipoProducto Menu::getTipoProducto(){
    return MENU;
}
void Menu::incrementarCantComunes(int cant){
    this->cantComunes = this->cantComunes + cant; 
}
void Menu::decrementarCantComunes(int cant){
    this->cantComunes = this->cantComunes - cant;  
}
int Menu::eliminarComun(string codigo){
    for (list<ProductoMenu*>::iterator it=this->listaProductos.begin(); it != this->listaProductos.end(); ++it){
        string cod=(*it)->getCodigoComun();
        if(cod==codigo){
            this->listaProductos.remove((*it));
            delete (*it);
            this->decrementarCantComunes(1);
            it=this->listaProductos.end();  
        }
    }
    return this->cantComunes;
}
void Menu::incrementarPrecio(float precio){
    float p = getPrecio();
    p = p + precio;
    setPrecio(p);
}
void Menu::aplicarDescuento(){
    float p = getPrecio();
    p = p*0.90;
    setPrecio(p);
}
void Menu::agregarComunes(list<DtProductoCantidad> productosComunes){
    for (list<DtProductoCantidad>::iterator it=productosComunes.begin(); it != productosComunes.end(); ++it){
        ProductoMenu* pm = new ProductoMenu(it->getCantidad());
        pm->asignarComun(it->getCodigo());
        this->listaProductos.push_back(pm);
        this->incrementarCantComunes(1);
    }
}

void Menu::calcularPrecio(){
    for (list<ProductoMenu*>::iterator it=this->listaProductos.begin(); it != this->listaProductos.end(); ++it){
        float precioCom = (*it)->getPrecio();
        this->incrementarPrecio(precioCom);
    }
    this->aplicarDescuento();
}

list<ProductoMenu*> Menu::getListaProductos(){
    return this->listaProductos;
}
void Menu::setListaProductos(list<ProductoMenu*> lista){
    this->listaProductos=lista;
}

Menu::~Menu(){}