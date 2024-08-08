Algoritmo sin_titulo
	Definir dni, dniIngreasado, intentos, ingresaCorrectamnete Como Entero
	Definir nota Como Real
	dni = 38632584
	nota = 7
	dniIngreasado = 0
	intentos = 1
	ingresaCorrectamnete = 0
	Repetir
		Escribir "ingresar el dni"
		Leer dniIngreasado
		si dni <> dniIngreasado Entonces
			Escribir "el dni esta mal ingresado"
			intentos = intentos + 1
		SiNo
			Escribir "los datos son validos"
		FinSi
		
		si intentos == 4 Entonces
			Escribir "te quedaste sin intentos"
		FinSi
	Mientras Que dni <> dniIngreasado y intentos < 4
	si dni = dniIngreasado y intentos <= 3 
		Escribir "tu nota del parcial es ", nota
	FinSi
FinAlgoritmo
