Algoritmo sin_titulo
	Definir i, arreglo, suma, numeromayor Como Entero
	dimension arreglo[6]
	arreglo[1] = 10
	arreglo[2] = 20
	arreglo[3] = 5
	arreglo[4] = 15
	arreglo[5] = 30
	arreglo[6] = 20
	numeromayor = 0
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		Escribir "el indice es " i ", el valor ", arreglo[i]
	FinPara
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		suma = suma + arreglo[i]
	FinPara
	Escribir "ell valor de la suma es ", suma
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		Si i % 2 <> 0 Entonces
			Escribir "el contenido de este indice: ", i " es ", arreglo[i]
		FinSi
	FinPara
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		Si arreglo[i] % 2 <> 0 Entonces
			Escribir "la podicion correspondiente contiene un valor impar: ", i
		FinSi
	FinPara
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		Si arreglo[i] > numeromayor Entonces
			numeromayor = arreglo[i]
		FinSi
	FinPara
	Escribir "el numero mas grande es ", numeromayor
FinAlgoritmo
