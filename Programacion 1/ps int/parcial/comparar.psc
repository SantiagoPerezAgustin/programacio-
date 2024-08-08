Proceso Instituto
	definir profesores, nroprofesor como entero
	dimension profesores[4,5]
	definir i, j, profesormayor como entero
	definir dia Como Caracter
	definir importehora como real
	para i <- 0 hasta 3 con paso 1
		para j <- 0 hasta 4 con paso 1
			segun j 
				0:
					dia = "Lunes"
				1:
					dia = "Martes"
				2:
					dia = "Miércoles"
				3:
					dia = "Jueves"
				4:
					dia = "Viernes"
			FinSegun
			Repetir							
				escribir "Ingrese horas de clases dictadas el dia ", dia, " para el profesor ", i+1
				leer profesores[i,j]
				si profesores[i,j] < 0
					escribir "Las horas dictadas de clases NO pueden ser negativas"
				FinSi
			Hasta Que profesores[i,j] > 0
		FinPara
	FinPara
	
	Repetir							
		escribir "Ingrese importe de hora clase"
		leer importehora
		si importehora < 0
			escribir "El importe hora clase NO puede ser negativo"
		FinSi
	Hasta Que importehora > 0
	profesormayor = profesor_mayor_horas(profesores, nroprofesor)
		
	escribir "El profesor que registra la mayor cantidad de horas dictadas es: ", nroprofesor, " con: ", profesormayor, " horas"
	Escribir  "Debe cobrar por dicho trabajo: ", profesormayor * importehora

FinProceso
funcion profesormayor <- profesor_mayor_horas(profesores, nroprofesor por referencia)
	definir i, j, profesormayor, acum como entero
	profesormayor = 0
	nroprofesor = 0
	para i <- 0 hasta 3 con paso 1
		acum = 0
		para j <- 0 hasta 4 con paso 1
			acum = acum + profesores[i,j]
		FinPara
		si profesormayor < acum
			profesormayor = acum
			nroprofesor = i +1
		FinSi
	FinPara 
FinFuncion