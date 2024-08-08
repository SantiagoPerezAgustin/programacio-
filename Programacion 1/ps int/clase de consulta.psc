Algoritmo sin_titulo
	Definir medioPago, i, tipoTarjeta, contador Como Entero
	Definir ClienteFrecuente, DniCliente, ingresarFin, a Como Cadena
	Definir iva, montoFinal, monto, montoTotal Como Real
	monto <- 0
	ClienteFrecuente = 'S'
	ingresarFin = 'S'
	iva = 1.21
	montoTotal = 0
	Repetir
		Repetir
			Escribir 'ingrese tu dni (tiene q tener mas de 7 numero sino sera rechazado)'
			Leer DniCliente
			
			Si Longitud(DniCliente) >= 7 Entonces
				Escribir 'tu dni es valido'
			SiNo
				Escribir "es invalido vuelva ingresarlo"
			FinSi
		Mientras Que Longitud(DniCliente) <= 7
		Escribir 'ingrese el monto'
		Leer monto
		Escribir "ingrese el medio de pago, 1 para efectivo, 2 debito, 3 credito"
		leer medioPago
		Segun medioPago Hacer
			1:
				Escribir 'el pago es en efectivos, tienes un 15% de descuneto'
				montoFinal <- monto * 0.85
				a = "efectivo "
			2:
				Escribir 'el pago es con credito, tienes un 10% de descuento'
				montoFinal <-  monto * 0.90
				a = "debito"
			3:
				Escribir 'pagas con credito'
				a = "debito"
				Escribir "ingrese el tipo de tajeta, 1 mercado pago , 2 nacion, 3 naranja"
				leer tipoTarjeta
				Segun tipoTarjeta Hacer
					1:
						Escribir "pagas con mercado de pago"
					2:
						Escribir "pagas con nacion"
					3:
						Escribir "pagas con naranja"
					De Otro Modo:
						Escribir "no trabajamos con otras tarjetas"
				FinSegun
			De Otro Modo:
				Escribir "no tenemos otro medio de pago"
		FinSegun
		Escribir "es un cliente frecuente ponga s si y no si no"
		Leer ClienteFrecuente
		si ClienteFrecuente = S Entonces
			Escribir "el cliente es frecuente"
		SiNo
			Escribir "el cliente no es frecuente"
		FinSi
		montoFinal = montoFinal * iva
		Escribir "Dni ", DniCliente
		Escribir "medio de pago ", a
		Escribir "total ", montoFinal
		contador = contador + 1
		montoTotal = montoTotal + montoFinal
		Escribir "ingrese N si quiere terminar el programa"
		Leer ingresarFin
	Hasta Que ingresarFin <> "s"
	Escribir "la cantida de la ventas es ", contador
	Escribir "el total de las ventas es ", montoTotal
FinAlgoritmo
