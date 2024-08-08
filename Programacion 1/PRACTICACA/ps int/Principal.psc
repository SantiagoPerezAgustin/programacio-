to  Everyone
Proceso Principal
	definir i Como Entero
    Definir prod Como Caracter
    Dimension prod[4, 4]
    
    // Inicializar los datos de los productos
    CargarDatos(prod)
	
	//Mostramos los datos
	mostrarDatos(prod)
	
    // Solicitar la cantidad vendida para cada producto
	registrarVentas(prod)
	
	//Mostramos los datos
	mostrarDatos(prod)
	
    // Calcular el monto total de ventas y el IVA y mostrar
	calcularMontosYMostrar(prod)
	
	
    
FinProceso
SubProceso CargarDatos(productos)
    productos[0,0] = "01"
    productos[0,1] = "3500.00"
    productos[0,2] = "Mantel 2x2"
    productos[0,3] = "0" //inicialice en "0" la columna de la cantidad
    productos[1,0] = "02"
    productos[1,1] = "800.99"
    productos[1,2] = "Plato playo 24cm"
    productos[1,3] = "0"
    productos[2,0] = "03"
    productos[2,1] = "1450.50"
    productos[2,2] = "Copa vino"
    productos[2,3] = "0"
    productos[3,0] = "04"
    productos[3,1] = "650.50"
    productos[3,2] = "Plato hondo 22cm"
    productos[3,3] = "0"
FinSubProceso
SubProceso mostrarDatos(productos)
	Definir i Como Entero
	Para i<- 0 hasta 3 Hacer
		Escribir "Código: ", productos[i,0], "Precio: ", productos[i,1], "Descripción: ", productos[i,2], "Cantidad: ", productos[i,3]
		
	FinPara
    
FinSubProceso

SubProceso registrarVentas(productos)
	definir i Como Entero
	Para i<-0 Hasta 3 Hacer
		Escribir "Ingrese la cantidad vendida del producto ", productos[i, 0], " - ", productos[i, 2]
		leer productos[i, 3]
	FinPara
FinSubProceso
SubProceso calcularMontosYMostrar(productos)
	Definir i Como Entero
	Definir precio, cantidad, ivaProducto, totalProducto, totalNeto, totalConIva Como Real
	
	totalNeto<-0
	totalIva<-0
	totalConIva <-0
	Para i<-0 hasta 3 Hacer
		precio <- ConvertirANumero(productos[i,1])
		cantidad <- ConvertirANumero(productos[i,3])
		totalProducto <- calcularTotalProducto(precio, cantidad)
		totalNeto <- totalNeto + totalProducto
		
		ivaProducto <- totalProducto * 1.21
		
		totalConIva <- totalConIva + ivaProducto
	FinPara
	
	Escribir "El monto total neto es: ", totalNeto
	Escribir "El IVA total es: ", totalConIva - totalNeto
	
FinSubProceso

subproceso totalProd <- calcularTotalProducto(precio, cantidad)
	Definir totalProd Como Real
	totalProd<- precio * cantidad
FinSubProceso
