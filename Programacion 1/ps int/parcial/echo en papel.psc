Algoritmo sin_titulo
	Definir i, j, profeMayor, profes, numeroProfe como entero
	Dimension profes[4, 5]
	Definir dia Como Caracter
	Definir importe Como Real
	para i = 0 Hasta 4 - 1 Hacer
		para j = 0 Hasta 5 - 1 Hacer
			segun j
			0:
				dia = "lunes"
			1:
				dia = "martes"
			2:
				dia = "miercoles"
			3:
				dia = "jueves"
			4:
				dia = "viernes"
		FinSegun
		Repetir
			Escribir "ingrese las horas trabajadas del profesor ", i + 1 " el dia ", dia
			Leer profes[i,j]
			si profes[i,j] < 0 Entonces
				Escribir "no pueden ser numero negativos"
			FinSi
		Mientras Que profes[i, j] < 0
		FinPara
	FinPara
	Repetir
		Escribir "ingrese el importe"
		Leer importe
		si importe<=0
			Escribir "no pueden ser negativos o 0"
		FinSi
	Mientras Que importe <= 0
	profeMayor = calculoHoras(profes, numeroProfe)
	Escribir "el profesor con mayor carga horaria es el ", numeroProfe, " con: ", profeMayor " horas"
	Escribir "el importe es de ",importe * profeMayor 
FinAlgoritmo

Funcion  profeMayor = calculoHoras(profes, numeroProfe Por Referencia)
	Definir i, j, profeMayor, acum Como Entero
	profeMayor = 0
	numeroProfe = 0
	Para i = 0 Hasta 4- 1 Hacer
		acum = 0
		Para j = 0 Hasta 5 - 1 Hacer
			acum = acum + profes[i, j]
		FinPara
		si profeMayor < acum
			profeMayor = acum
			numeroProfe = i + 1
		FinSi
	FinPara
FinFuncion
