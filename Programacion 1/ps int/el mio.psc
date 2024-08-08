Algoritmo Principal
	Definir Productos Como Caracter
	Definir i como Entero
	Dimension Productos[4, 4]
	
	CargarDatos(Productos)
	
	Ingresar_Datos(Productos, i)
FinAlgoritmo

	
	SubProceso CargarDatos(Productos)
		Productos[1, 1] = "01"
		Productos[1, 2] = "3500.00"
		Productos[1, 3] = "Copa Vino"
		Productos[1, 4] = "0"
		
		Productos[2, 1] = "02"
		Productos[2, 2] = "800.99"
		Productos[2, 3] = "Plato Plato 24 cm"
		Productos[2, 4] = "0"
		
		Productos[3, 1] = "03"
		Productos[3, 2] = "1950.50"
		Productos[3, 3] = "Copa Vino"
		Productos[3, 4] = "0"
		Productos[4, 1] = "04"
		Productos[4, 2] = "650.50"
		Productos[4, 3] = "Plato Hondo 22 cm"
		Productos[4, 4] = "0"
	Fin SubAlgoritmo
	
	SubProceso Ingresar_Datos(Productos, i)
		
		Para i=1 Hasta 4 Con Paso 1 Hacer
			Escribir "Ingrese la cantidad"
			Leer Productos[i, 4]
			Escribir Productos[i, 1], Productos[i, 2], Productos[i, 3], Productos[i, 4]
		FinPara
		
		Escribir Productos[i, 1], Productos[i, 2], Productos[i, 3], Productos[i, 4]
FinSubProceso
