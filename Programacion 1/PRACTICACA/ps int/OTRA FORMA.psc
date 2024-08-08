Algoritmo sin_titulo
		definir codigo, cantidad_prendas, contadorventas Como Entero
		definir precio, montofinal Como Real
		definir talla como cadena
		montofinal = 0
		contadorventas = 0
		Escribir "Ingrese el codigo de la prenda (ingrese 10000 para terminar)"
		leer codigo
		Mientras codigo > 0 & codigo < 9999 Hacer
			Escribir "Ingrese el precio en ARS"
			leer precio
			Escribir "Ingrese la talla de la prenda"
			leer talla
			si talla == "XL"
				precio = precio * 1.05
			FinSi
			Escribir "?Cuantas prendas con el mismo codigo han sido compradas?"
			leer cantidad_prendas
			si cantidad_prendas > 3
				precio = cantidad_prendas * precio * 0.9
			FinSi
			contadorventas = contadorventas+1
			montofinal = montofinal + precio
			Escribir "Ingrese el codigo de la prenda (ingrese 10000 para terminar)"
			leer codigo
		FinMientras
		Escribir "El numero total de ventas fue de " contadorventas
		Escribir "El monto total recaudado es de " montofinal

FinAlgoritmo
