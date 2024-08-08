Algoritmo sin_titulo
	definir x como entero
	Definir num, suma Como Real
	suma = 0
	Para x<-1 Hasta 10 Con Paso 1 Hacer
		Repetir
			Escribir "ingrese los numeros positivos"
			Leer num
			Si num <= 0  Entonces
				Escribir "numero invalido, vuelva a ingresarlo"
			SiNo
				suma = suma + num
			FinSi
		Mientras Que num <= 0
	FinPara
	Escribir "la sumatoria de todos los nimero es ", suma
FinAlgoritmo
