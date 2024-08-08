Algoritmo sin_titulo
	Definir notaAlumno Como Entero
	Escribir 'ingresar la nota'
	Leer notaAlumno
	Si notaAlumno>=0 Y notaAlumno<=10 Entonces
		Segun notaAlumno Hacer
			0, 1, 2, 3:
				Escribir 'esta reprobado'
			4, 5:
				Escribir 'esta regular'
			De Otro Modo:
				Escribir 'esta aprobado'
		FinSegun
	SiNo
		Escribir 'la nota es invalida'
	FinSi
FinAlgoritmo
