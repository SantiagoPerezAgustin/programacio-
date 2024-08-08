Algoritmo sin_titulo
	Definir codigoTrabajo Como Cadena
	Definir empleados, horasTrabajadas, horasDepto, horasTarde, horasManana Como Entero
	Para i<-1 Hasta 2 Con Paso 1 Hacer
		Escribir 'Ingrese la cantidad de empleados'
		Leer empleados
		horasDepto <- 0
		Para j<-1 Hasta empleados Con Paso 1 Hacer
			Escribir 'Ingrese las horas trabajadas del empleado numero', j
			Leer horasTrabajadas
			Repetir
				Escribir 'Ingrese el turno de trabajo'
				Leer codigoTrabajo
				Si codigoTrabajo=='T' O codigoTrabajo =="t" Entonces
					horasTarde <- horasTarde+horasTrabajadas
				SiNo
					horasManana <- horasManana+horasTrabajadas
				FinSi
			Mientras Que (codigoTrabajo == "T" O codigoTrabajo == "t") Y (codigoTrabajo == "M" O codigoTrabajo == "m")
			horasDepto <- horasDepto+horasTrabajadas
		FinPara
		Escribir 'Las horas trabajadas en depto ', i, ' son de ', horasDepto, 'hs.'
	FinPara
	Escribir 'Las horas trabajadas de los empleados del turno ma?ana son de ', horasManana, 'hs.'
	Escribir 'Las horas trabajadas de los empleados del turno tarde son de ', horasTarde, 'hs.'
FinAlgoritmo
