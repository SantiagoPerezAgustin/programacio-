Algoritmo sin_titulo
	definir array, i, j, contador, cantidad, maxima como entero
	Escribir "ingrse la cantidad de n "
	Leer cantidad
	dimension array[cantidad]
	i = 1
	contador = 0
	Para i<-1 Hasta cantidad Con Paso 1 Hacer
		Escribir "ingrese un numero "
		Leer array[i]
	FinPara
	Para i<-1 Hasta cantidad Con Paso 1 Hacer
		Para j<-i Hasta cantidad Con Paso 1 Hacer
			Si array[i] == array[j] Entonces
				contador = contador +1
			FinSi
		FinPara
		Si i == 1 Entonces
			maxima = contador
			numeroMaximo = array[i]
		SiNo
			Si contador > maxima Entonces
				maxima = contador
				numeroMaximo = array[I]
			FinSi
		FinSi
		contador = 0
	FinPara
	Escribir "el numero q mas se repite es ", numeroMaximo
FinAlgoritmo
