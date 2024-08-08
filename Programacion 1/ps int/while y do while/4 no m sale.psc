Algoritmo sin_titulo
	Definir cantAlumnos, cantParciales, alumno, parcial Como Entero
	Definir nota, promedioAlumno, promedioCurso Como Real
	promedioCurso <- 0
	Escribir 'ingrese la cantidad de alumnos'
	Leer cantAlumnos
	Escribir 'ingrese la cantidad de q se tomaron'
	Leer cantParciales
	sumaPromedio <- 0
	Para alumno<-1 Hasta cantAlumnos Con Paso 1 Hacer
		Para parcial<-1 Hasta cantParciales Con Paso 1 Hacer
			promedioAlumno <- promedioAlumno+nota
			Repetir
				Escribir 'parcial ', parcial
				Escribir 'la nota del alumno ', alumno, ' es '
				Leer nota
				Si 0 < nota y nota < 10 Entonces
					Escribir "nota valida"
				SiNo
					Escribir "la nota es invalida"
				FinSi
			Mientras Que 0 > nota y nota < 10
		FinPara
		promedioAlumno <- promedioAlumno/cantParciales
		Escribir 'el promedio del alumno ', alumno, ' es: ', promedioAlumno
		promedioCurso <- promedioCurso+promedioAlumno
	FinPara
	promedioCurso <- promedioCurso/cantAlumnos
	Escribir 'el promedio general es ', promedioCurso
FinAlgoritmo
