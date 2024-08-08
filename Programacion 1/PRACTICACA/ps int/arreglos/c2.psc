Algoritmo sin_titulo
	Definir arreglo, i, rep Como Entero
	Dimensionar arreglo(5)
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Escribir 'ingresar los 5 valores'
		Leer arreglo[i]
		Si arreglo[i] == 5 Entonces
			rep = rep + 1
		FinSi
	FinPara
	Escribir "las veces q se periten son " rep
FinAlgoritmo
