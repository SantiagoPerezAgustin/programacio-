Algoritmo sin_titulo
	definir valorVenta Como Entero
	Definir descuento, resultado Como Real
	Escribir "el valor de la venta es"
	Leer valorVenta
	Si valorVenta > 0 Entonces
		Si valorVenta >= 100000 Entonces
			descuento = valorVenta * 0.15
			Escribir "el descuento de la venta es ", descuento
		SiNo
			descuento = valorVenta * 0.10
			Escribir "el descuento de la venta es ", descuento
		FinSi
	SiNo
		Escribir "no hay nada gratis"
	FinSi
FinAlgoritmo
