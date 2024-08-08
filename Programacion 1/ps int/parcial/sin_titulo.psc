Algoritmo sin_titulo
	Definir edadPersona, importeTotal,importe, calculo  Como Entero
	Definir A, B, eleccion, volver Como Caracter
	A = 'A'
	B = 'B'
	Repetir
		
		
		Escribir 'ingrese entre las dos plizsa q tenmos diponibles, A es para Cobertura Amplia y B para cobertura de daños a terceros'
		Leer eleccion
		si eleccion == 'A' Entonces
			Escribir 'Su plan es el Plan A'
			importe = 1200
		SiNo
			Escribir 'Su plan es el Plan B'
			importe = 950
		FinSi
	
		Escribir 'ingrese su edad, tenga en cuenta q si tiene mas de 40 años se le hara un recargo del 20% y sino se le hara de 10%'
		Leer edadPersona
		Mientras edadPersona < 20 | edadPersona > 70
			Escribir "Usted a ingresado mal su edad, ingresela de vuelta"
			Leer edadPersona
		FinMientras
	
		Si 	edadPersona>=40 Entonces
			calculo <- importe * 0.20
			importeTotal <- importe+calculo
		SiNo
			calculo <- importe * 0.10
			importeTotal <- importe + calculo
		FinSi
		Escribir 'El total seria de unos ', importeTotal
		Escribir "ingrese S si quiere seguir viendo polizas y si no ponga N"
		Leer volver
	Mientras Que volver <> 'N'
FinAlgoritmo
