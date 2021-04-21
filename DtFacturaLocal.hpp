#ifndef DTFACTURALOCAL
#define DTFACTURALOCAL
#include "DtFechaHora.hpp"
#include "DtProductoFactura.hpp"
#include <iostream>
#include <list>

using namespace std;

class DtFacturaLocal{
    private:
        string codVenta;
        DtFechaHora fechaEmision;
        float descuento;
        list<DtProductoFactura> productos;
        float subtotal;
        float montoTotalVenta;
        float montoTotalVentaConIVA;
        string nombreMozo;
    public:
        DtFacturaLocal();
        DtFacturaLocal(string, DtFechaHora, float,list<DtProductoFactura>,float,float,float,string);
        string getCodVenta();
        DtFechaHora getFechaEmision();
        float getDescuento();
        list<DtProductoFactura> getProductos();
        float getSubtotal();
        float getMontoTotalVenta();
        float getMontoTotalVentaConIVA();
        string getNombreMozo();
        friend ostream& operator <<(ostream&,const DtFacturaLocal&);
        ~DtFacturaLocal();
};
#endif