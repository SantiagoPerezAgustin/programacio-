Algoritmo sin_titulo
	Definir arreglo, i Como Entero
	Dimensionar arreglo(5)
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Leer arreglo[i]
	FinPara
	Escribir "de atras para adelante"
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Escribir 'indice, ', i, ' valor: ', arreglo[i]
	FinPara
	Escribir "de adelante para atras"
	Para i<-5 Hasta 1 Con Paso -1 Hacer
		Escribir "indice , ", i " valor " ,arreglo[i]
	FinPara
FinAlgoritmo
