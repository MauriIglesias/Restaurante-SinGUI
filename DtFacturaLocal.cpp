#include "DtFacturaLocal.hpp"
DtFacturaLocal::DtFacturaLocal(){}
DtFacturaLocal::DtFacturaLocal(string codVenta, DtFechaHora fechaEmision, float descuento,list<DtProductoFactura> productosfac, float subtotal,float montoTotalVenta,float montoTotalVentaConIVA,string nombreMozo){
    this->codVenta=codVenta;
    this->fechaEmision=fechaEmision;
    this->descuento=descuento;
    this->productos=productosfac;
    this->subtotal=subtotal;
    this->montoTotalVenta=montoTotalVenta;
    this->montoTotalVentaConIVA=montoTotalVentaConIVA;
    this->nombreMozo=nombreMozo;
}
string DtFacturaLocal::getCodVenta(){
    return this->codVenta;
}
DtFechaHora DtFacturaLocal::getFechaEmision(){
    return this->fechaEmision;
}
float DtFacturaLocal::getDescuento(){
    return this->descuento;
}
list<DtProductoFactura> DtFacturaLocal::getProductos(){
    return this->productos;
}
float DtFacturaLocal::getSubtotal(){
    return this->subtotal;
}
float DtFacturaLocal::getMontoTotalVenta(){
    return this->montoTotalVenta;
}
float DtFacturaLocal::getMontoTotalVentaConIVA(){
    return this->montoTotalVentaConIVA;
}
string DtFacturaLocal::getNombreMozo(){
    return this->nombreMozo;
}

ostream& operator <<(ostream& salida,const DtFacturaLocal& dfl){
    list<DtProductoFactura> lista = dfl.productos;
	cout << "Codigo: " << dfl.codVenta << "\nFecha de Emision: " << dfl.fechaEmision << "\nDescuento aplicado: " << dfl.descuento << "\nProductos: " << endl;
    for (list<DtProductoFactura>::iterator it=lista.begin(); it != lista.end(); ++it){
        cout << *it;
    }
    cout << "\n" << "Subtotal: " << dfl.subtotal << "\nMonto Total de la Venta sin IVA: " << dfl.montoTotalVenta << "\nMonto Total de la Venta con IVA incl. : " << dfl.montoTotalVentaConIVA << "\nUd. fue atendido por: " << dfl.nombreMozo << endl;
    return salida;
}

DtFacturaLocal::~DtFacturaLocal(){}