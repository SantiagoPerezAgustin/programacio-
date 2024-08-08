Algoritmo sin_titulo
	Definir pagos como cadena
	Dimension pagos[3,3]
	
	//cargamos datos
	cargadatos(pagos)
	//ingresamos los datos y calculamos
	ingresamosYcalculamos(pagos)
FinAlgoritmo

SubAlgoritmo cargadatos(pagos)
	pagos[0,0] = "Efectivo"
	pagos[0,1] = "0.85"
	pagos[1,0] = "Debito" 
	pagos[1,1] = "0.90"
	pagos[2,0] = "Credito"
	pagos[2,1] = "1"
FinSubAlgoritmo

SubAlgoritmo ingresamosYcalculamos(pagos)
	Definir i, montoTotal Como Real
	montoTotal = 1
	Para i = 0 Hasta 3 - 1 Hacer
		Escribir "ingresamos el monto total vendido del medio de pago de ", pagos[i,0]
		Leer pagos[i,2]
	FinPara
	Para i = 0 Hasta 3 - 1 Hacer
		montoTotal = montoTotal * ConvertirANumero(pagos[i,2])
	FinPara
	Escribir "el monto total es de ", montoTotal
FinSubAlgoritmo

	