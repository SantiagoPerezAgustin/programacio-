Algoritmo sin_titulo
	Definir profes, nroprofes, i, j, mayorProfe como entero
	Definir  dia Como Caracter
	definir importe Como Real
	Dimension profes[4,5]
	Para  i = 0 Hasta 4 - 1 Con Paso 1
		Para j = 0 Hasta 5 - 1 Con Paso 1
			Segun j
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
				Escribir "ingrese las horas del profesor ", i + 1 " del dia ", dia
				Leer profes[i,j]
				si profes[i,j] < 0 Entonces
					Escribir "las notas no pueden ser negativas"
				FinSi
			Hasta Que profes[i,j] > 0
		FinPara
	FinPara
	Repetir
		Escribir "ingrese el importe de hora de clase"
		Leer importe
		si importe < 0
			Escribir "debe ser mayor a 0"
		FinSi
	Hasta Que importe > 0
	mayorProfe = calculo_mayor(profes, nroprofes)
	Escribir "el profesor ", nroprofes " el q tiene mas cantidad de carga horaria con ", mayorProfe " horas"
	Escribir "el importe es de ", importe * mayorProfe
FinAlgoritmo

Funcion mayorProfe = calculo_mayor(profes, nroprofes Por Referencia)
	Definir acum, i, j, mayorProfe Como Entero
	mayorProfe = 0
	Para i = 0 Hasta 4 - 1 Con Paso 1
		acum = 0
		Para j = 0 Hasta  5 - 1 Hacer
			acum = acum + profes[i,j]
		FinPara
		si mayorProfe < acum
			mayorProfe = acum
			nroprofes = i + 1
		FinSi
	FinPara
FinFuncion
	