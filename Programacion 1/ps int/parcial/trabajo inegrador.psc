Algoritmo sin_titulo
	definir ventas como cadena
	Definir IVA Como Real
	Dimension ventas[4,3]
	IVA = 1.21
	//cargamos datos
	cargarDatos(ventas)
	//ingresamos la cantidad vendida
	cantidadVendida(ventas)
	//calculamos y mostramos los resultados
	calculoYmostrar(ventas, IVA)
	//ordenar de mayor a menor
	ordenamiento(ventas)
FinAlgoritmo

SubAlgoritmo cargarDatos(ventas)
	ventas[0,0] = "3500"
	ventas[0,1] = "Mantel 2x2"
	ventas[0,2] = "0"
	ventas[1,0] = "800"
	ventas[1,1] = "Plato playo 24cm"
	ventas[1,2] = "0"
	ventas[2,0] = "1450"
	ventas[2,1] = "Copa vino"
	ventas[2,2] = "0"
	ventas[3,0] = "650"
	ventas[3,1] = "Plato hondo 22cm"
	ventas[3,2] = "0"
FinSubAlgoritmo

SubAlgoritmo cantidadVendida(ventas)
	Definir i Como entero
	Escribir "ingresamos productos"
	Para i = 0 Hasta 4 - 1 Con Paso 1 Hacer
		Escribir "ingrese la cantidad del peroducto ", i + 1
		Leer ventas[i,2]
	FinPara
FinSubAlgoritmo

SubAlgoritmo calculoYmostrar(ventas, IVA)
	Definir montoNeto, montoIva, i Como real
	montoNeto = 0
	montoIva = 0
	Para i = 0 Hasta 4 - 1 Hacer
		montoNeto = montoNeto + (ConvertirANumero(ventas[i,0]) * ConvertirANumero(ventas[i,2]))
	FinPara
	montoIva = montoNeto * IVA
	Escribir "el total sin iva es ", montoNeto
	Escribir "El total de IVA del dia es de ", montoIva
FinSubAlgoritmo

SubAlgoritmo ordenamiento(ventas)
	Definir i, j, pos_mayor Como Entero
	Definir  aux Como Caracter
	pos_mayor = 0
	para i = 0 Hasta 4 - 2 Hacer
		pos_mayor = i
		Para j = i + 1 Hasta 4 - 1 Hacer
			si(ConvertirANumero(ventas[pos_mayor, 2]) < ConvertirANumero(ventas[j,2])) Entonces
				pos_mayor = j
			FinSi
		FinPara
		Para j = 0 Hasta 4 - 1 Hacer
			aux = ventas[pos_mayor,2]
			ventas[pos_mayor,2] = ventas[i,2]
			ventas[i,2] = ventas[pos_mayor,2]
		FinPara
	FinPara
	Para i = 0 Hasta 4 - 1 Hacer
		Escribir "",ventas[i,2]
	FinPara
FinSubAlgoritmo
	