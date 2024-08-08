Algoritmo sin_titulo
	definir i, arreglo, mayor1 como entero
	dimension arreglo[10]
	mayor1 = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir "ingresa 10 numeros"
		Leer arreglo[i]
	FinPara
	Para  i = 1 Hasta 10 Con Paso 1 Hacer
		si arreglo[i] > mayor1 Entonces
			mayor1 = arreglo[i]
		FinSi
		Escribir arreglo[i]
	FinPara
	Escribir "el numero mayor del areglo es ", mayor1
FinAlgoritmo
