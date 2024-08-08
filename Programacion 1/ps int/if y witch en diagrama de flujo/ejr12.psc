Algoritmo sin_titulo
	Definir dni, mediopago, tipotarjeta, cuotas, total Como Entero
	total <- 4600
	Escribir 'ingrese el dni'
	Leer dni
	Si 1000000<dni Y dini<99999999 Entonces
		Escribir 'que medio de pago vas a utlizar'
		Leer mediopago
		Segun mediopago Hacer
			1:
				Escribir 'el precio va a ser ', total
				Definir efectivo Como Cadena
				Leer efectivo
			2:
				Definir tarjeta Como Cadena
				Leer tarjeta
				Escribir 'que tipo de tarjeta vas utilizar'
				Leer tipotarjeta
				Segun tipotarjeta Hacer
					1:
						Escribir 'visa'
						Definir qtarjeta Como Cadena
						Leer qtarjet
						Escribir 'ingresar las cantidad de cuotas'
						Leer cuotas
						Segun cuotas Hacer
							1:
								Escribir 'tenes 0 de interes'
								Escribir 'el tota es ', total
							3:
								Escribir 'tenes un interes de 4%'
								total <- total*1.04
								Escribir 'el total es ', total
							6, 12:
								Escribir 'tenes un interes de 8%'
								total <- total*1.08
								Escribir 'el total es ', total
							De Otro Modo:
								Escribir 'no trabajamos con esas cuotas'
						FinSegun
					2:
						Escribir 'es american expres'
						Definir qtarjeta Como Cadena
						Leer qtarjeta
						Escribir 'ingreasr las cuotas'
						Leer cuotas
						Segun cuotas Hacer
							1:
								Escribir 'tenes 0 de interes'
								Escribir 'el total es ', total
							3:
								Escribir 'tenes un interes de 4%'
								total <- total*1.04
								Escribir 'el total es ', total
							6, 12:
								Escribir 'tenes un interes de 8%'
								total <- total*108
								Escribir 'el total es ', total
							De Otro Modo:
								Escribir 'no trabamos con esas cuotas'
						FinSegun
					3:
						Escribir 'es mercado pago'
						Definir qtarjeta Como Cadena
						Leer qtarjeta
						Escribir 'ingresar las cuotas'
						Leer cuotas
						Segun cuotas Hacer
							1:
								Escribir 'tenes 0 de interes'
								Escribir 'el total es ', total
							3:
								Escribir 'tenes un inters de 4%'
								total <- total*1.04
								Escribir 'el total es ', total
							6, 12:
								Escribir 'tenes un interes de 8%'
								total <- total*1.08
								Escribir 'el total es ', total
							De Otro Modo:
								Escribir 'no trabajamos con mas cuotas'
						FinSegun
					4:
						Escribir 'es cabal'
						Definir qtarjeta Como Cadena
						Leer qtarjeta
						Escribir 'ingresar las cuotas'
						Leer cuotas
						Segun cuotas Hacer
							1:
								Escribir 'el interes es de 0'
								Escribir 'el total es ', total
							3:
								Escribir 'el interes es de 4%'
								total <- total*1.04
								Escribir 'el total es ', total
							6, 12:
								Escribir 'el interes es de 8%'
								total <- total*1.08
								Escribir 'total es ', total
							De Otro Modo:
								Escribir 'no trabajamos con mas cuotas'
						FinSegun
					De Otro Modo:
						Escribir 'no trabajamos con esa trajeta'
				FinSegun
			De Otro Modo:
				Escribir 'no tenemos otro metodo de pago'
		FinSegun
		Escribir 'tu dni es ', dni
		Escribir 'el medio de pago es ', tarjeta, efectivo
		Escribir 'la tarjeta es ', qtarjeta
		Escribir 'las cutas son ', cuotas
		Escribir 'el total es ', total
	SiNo
		Escribir 'ese documento no existe'
	FinSi
FinAlgoritmo
