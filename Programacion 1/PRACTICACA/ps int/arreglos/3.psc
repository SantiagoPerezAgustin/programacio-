Algoritmo sin_titulo
	definir arreglo, i como entero
	definir acum como real
	dimension arreglo[5]
	acum = 0
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Escribir "ingrese los numero"
		Leer arreglo[i]
		acum = acum + arreglo[i]
	FinPara
	Escribir "la suma de ", acum
FinAlgoritmo
