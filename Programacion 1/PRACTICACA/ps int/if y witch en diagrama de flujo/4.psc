Algoritmo sin_titulo
	Definir num1, num2, num3 Como Entero
	Leer num1, num2, num3
	Si num1>num2 Y num1>num3 Entonces
		Escribir num1, ' es el mayor'
	SiNo
		Si num2>num1 Y num2>num3 Entonces
			Escribir num2, ' es el mayor'
		SiNo
			Si num3>num1 y num3>num2 Entonces
				Escribir num3, " es el mayor"
			SiNo
				Escribir "hay dos numeros iguales"
			FinSi
		FinSi
	FinSi
FinAlgoritmo
