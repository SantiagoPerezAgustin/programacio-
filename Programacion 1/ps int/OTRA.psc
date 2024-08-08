Algoritmo sin_titulo
	definir codigoprenda, talle, finalDedia, finPrendas Como Caracter
	Definir PrendaS, PrendaM, prendaL, prendaXL, contador Como entero
	definir cant_ventas_vendias Como entero
	Definir Monto, montofinalinal, montofinalpersona, precio Como Real
	PrendaM = 0
	prendaL = 0
	prendaS = 0
	prendaXL = 0
	cant_ventas_vendias = 0
	montofinalpersona = 0
	Repetir
		Repetir
			Escribir "ingrese su codigo de prenda"
			Leer codigoprenda
		si Longitud(codigoprenda) = 4 Entonces
			Escribir "tu codigo es correcto"
		SiNo
			Escribir "tu codigo es incorrecto"
			Escribir "vuelva a ingresarlo"
		FinSi
	Mientras Que Longitud(codigoprenda) <> 4
	Repetir
	Escribir "ingrese el precio"
	Leer precio
	Escribir "ingrese el talle"
	Leer talle
	Segun talle Hacer
		Caso "S": 
			prendaS = prendaS + 1
			Monto = Monto + precio
			si prendaS > 3 Entonces
				Escribir "tenes un descuento del 10% en el total"
				Monto = Monto * 0.90
			FinSi
		caso "M":
			PrendaM = PrendaM + 1
			Monto = Monto + precio
			si PrendaM > 3 Entonces
				Escribir "tenes un descuento del 10% en el total"
				Monto = Monto * 0.90
			FinSi
		caso "L":
			prendaL = prendaL + 1
			Monto = Monto + precio
			si prendaL > 3 Entonces
				Escribir "tenes un descuento del 10% en el total"
				Monto = Monto * 0.90
			FinSi
		Caso "XL":
			Escribir "Tenes un recargo del 5%"
			Monto = Monto + precio
			Monto = Monto * 1.05
			prendaXL = prendaXL + 1
			si prendaXL > 3 Entonces
				Escribir "tenes un descuento del 10% en el total"
				Monto = Monto * 0.90
			FinSi
		De Otro Modo:
			Escribir "no tenemos otros talles"
	FinSegun
	montofinalpersona = montofinalpersona + Monto
	Escribir "tienes mas prendas?"
	Leer finprendas
	Mientras Que finprendas <> "N"
	montofinalinal = montofinalinal + montofinalpersona
	cant_ventas_vendias = cant_ventas_vendias+ 1
	Escribir "hay mas personas q quieren comprar ropa?"
	Leer finalDedia
	Mientras Que finalDedia <> "N"
	Escribir "FINAL DEL DIA"
	Escribir "las ventas del dia ", cant_ventas_vendias
	Escribir "el manto recaudado fue de ", montofinalinal
FinAlgoritmo
