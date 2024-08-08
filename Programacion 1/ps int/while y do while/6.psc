Algoritmo sin_titulo
	Definir nota, contador Como Entero
	Definir promedio, suma Como Real
	
	definir continuar Como Caracter
	suma = 0
	continuar = "s"
	Repetir
		Escribir "ingresar la nota"
		Leer nota
		suma = suma + nota
		contador = contador + 1
		Escribir "ingresar n si deseas seguir metiendo notas y si si quieres terminar"
		leer continuar
	Mientras Que continuar <> "s"
	promedio = suma / contador
	Escribir "la suma de las notas es: ", suma
	Escribir "el promedio de las notas es: ", promedio
FinAlgoritmo
