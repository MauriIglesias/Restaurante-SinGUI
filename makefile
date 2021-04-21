main: Comun.o ControladorAgregarProducto.o ControladorAltaProducto.o ControladorBajaProducto.o ControladorFacturar.o ControladorIniciarVenta.o ControladorQuitarProducto.o ControladorCargarDatos.o DtFacturaLocal.o DtFecha.o DtFechaHora.o DtProductoMenu.o DtProductoComun.o DtProducto.o DtProductoBase.o DtProductoCantidad.o DtProductoFactura.o Empleado.o Fabrica.o Factura.o ManejadorEmpleado.o ManejadorMesa.o ManejadorProducto.o ManejadorVenta.o Menu.o Mesa.o Mozo.o Producto.o ProductoMenu.o Venta.o VentaLocal.o VentaProducto.o main.o
	g++ Comun.o ControladorAgregarProducto.o ControladorAltaProducto.o ControladorBajaProducto.o ControladorFacturar.o ControladorIniciarVenta.o ControladorQuitarProducto.o ControladorCargarDatos.o DtFacturaLocal.o DtFecha.o DtFechaHora.o DtProductoMenu.o DtProductoComun.o DtProducto.o DtProductoBase.o DtProductoCantidad.o DtProductoFactura.o Empleado.o Fabrica.o Factura.o ManejadorEmpleado.o ManejadorMesa.o ManejadorProducto.o ManejadorVenta.o Menu.o Mesa.o Mozo.o Producto.o ProductoMenu.o Venta.o VentaLocal.o VentaProducto.o main.o -o app

Comun.o: Comun.hpp Comun.cpp
	g++ Comun.cpp -o Comun

ControladorAgregarProducto.o: ControladorAgregarProducto.hpp ControladorAgregarProducto.cpp
	g++ ControladorAgregarProducto.cpp -o ControladorAgregarProducto

ControladorAltaProducto.o: ControladorAltaProducto.hpp ControladorAltaProducto.cpp
	g++ ControladorAltaProducto.cpp -o ControladorAltaProducto

ControladorBajaProducto.o: ControladorBajaProducto.hpp ControladorBajaProducto.cpp
	g++ ControladorBajaProducto.cpp -o ControladorBajaProducto

ControladorFacturar.o: ControladorFacturar.hpp ControladorFacturar.cpp
	g++ ControladorFacturar.cpp -o ControladorFacturar

ControladorIniciarVenta.o: ControladorIniciarVenta.hpp ControladorIniciarVenta.cpp
	g++ ControladorIniciarVenta.cpp -o ControladorIniciarVenta

ControladorQuitarProducto.o: ControladorQuitarProducto.hpp ControladorQuitarProducto.cpp
	g++ ControladorQuitarProducto.cpp -o ControladorQuitarProducto

ControladorCargarDatos.o: ControladorCargarDatos.hpp ControladorCargarDatos.cpp
	g++ ControladorCargarDatos.cpp -o ControladorCargarDatos

DtFacturaLocal.o: DtFacturaLocal.hpp DtFacturaLocal.cpp

DtFecha.o: DtFecha.hpp DtFecha.cpp

DtFechaHora.o: DtFechaHora.hpp DtFechaHora.cpp

DtProductoMenu.o: DtProductoMenu.hpp DtProductoMenu.cpp

DtProductoComun.o: DtProductoComun.hpp DtProductoComun.cpp

DtProducto.o: DtProducto.hpp DtProducto.cpp

DtProductoBase.o: DtProductoBase.hpp DtProductoBase.cpp

DtProductoCantidad.o: DtProductoCantidad.hpp DtProductoCantidad.cpp

DtProductoFactura.o: DtProductoFactura.hpp DtProductoFactura.cpp

Empleado.o: Empleado.hpp Empleado.cpp

Fabrica.o: Fabrica.hpp Fabrica.cpp

Factura.o: Factura.hpp Factura.cpp

ManejadorEmpleado.o: ManejadorEmpleado.hpp ManejadorEmpleado.cpp
	g++ ManejadorEmpleado.cpp -o ManejadorEmpleado

ManejadorMesa.o: ManejadorMesa.hpp ManejadorMesa.cpp
	g++ ManejadorMesa.cpp -o ManejadorMesa

ManejadorProducto.o: ManejadorProducto.hpp ManejadorProducto.cpp
	g++ ManejadorProducto.cpp -o ManejadorProducto

ManejadorVenta.o: ManejadorVenta.hpp ManejadorVenta.cpp
	g++ ManejadorVenta.cpp -o ManejadorVenta

Menu.o: Menu.hpp Menu.cpp

Mesa.o: Mesa.hpp Mesa.cpp

Mozo.o: Mozo.hpp Mozo.cpp

Producto.o: Producto.hpp Producto.cpp

ProductoMenu.o: ProductoMenu.hpp ProductoMenu.cpp

Venta.o: Venta.hpp Venta.cpp

VentaLocal.o: VentaLocal.hpp VentaLocal.cpp

VentaProducto.o: VentaProducto.hpp VentaProducto.cpp

main.o: main.cpp
	g++ main.cpp -o main

clean:
	rm -rf *.o app
