Algoritmo sin_titulo
	definir num Como Real
	Definir contador Como Entero
	Repetir
		Escribir "ingrese numeros reales distintos a cero, ingrese cero si quiere terminar el proceso"
		Escribir "ingrese numeros"
		Leer num
		si num <> 0 Entonces
			Escribir "el numero es distinto a 0"
			contador = contador + 1
		FinSi
	Mientras Que num <> 0
	Escribir "la cantidad de numero q lo conforma es ", contador
FinAlgoritmo
