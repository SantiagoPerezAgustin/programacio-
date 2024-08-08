Algoritmo sin_titulo
	Definir departamentos, numeroEmpleados, horasTrabajadas, horasTotal, horasM, horasT, i, j, Manana_Tarde Como Entero
	numeroEmpleados = 0
	departamentos <- 5
	horasM = 0
	horasT = 0
	Para i<-0 Hasta departamentos-1 Hacer
		horasTotal <- 0
		Escribir 'ingrese la cantidad de trabajadores del departamento ', i+1
		Leer numeroEmpleados
		Para j<-0 Hasta numeroEmpleados-1 Hacer
			Escribir 'ingrese las horas del trabador ', j+1
			Leer horasTrabajadas
			horasTotal <- horasTotal+horasTrabajadas
			Escribir 'ingrese 1 si trabajas de Mañana y 2 si trabajas de tarde'
			Leer Manana_Tarde
			Si Manana_Tarde == 1
				Escribir 'trabajas de mañana'
				horasM <- horasM+horasTrabajadas
			SiNo
				Si Manana_Tarde == 2
					Escribir "trabajas de tarde"
					horasT = horasT + horasTrabajadas
				FinSi
			FinSi
			Escribir "en el departamento ", i + 1 " las horas trabajadas son ", horasTotal
		FinPara
	FinPara
	Escribir "Las horas trabajadas en la mañana son ", horasM
	Escribir "las horas trabajadas en la tarde son ", horasT
FinAlgoritmo
