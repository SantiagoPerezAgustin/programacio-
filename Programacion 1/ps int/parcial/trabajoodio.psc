Algoritmo sin_titulo
	Definir MAX_PERSONAS, MAX_CAMPOS, MAX_STRINGS Como Entero
	Definir personas como cadena
	Definir  op, salida Como Entero
	Dimension personas[8,5]
	salida = -1
	cargardatos(personas)
	Mientras salida <> 1 Hacer
        Escribir "Ingrese las siguientes opciones"
        Escribir "1: Buscar por dni"
        Escribir "2: Ordenar por apellido"
        Escribir "3: Ordenar por apellido y Nombre"
        Escribir "4: Busqueda por apellido y Nombre"
        Escribir "5: Para otro menu de opciones"
        Escribir "6: Salir"
        Leer op
		
        Segun op Hacer
            Caso 1:
                // Llamar al subproceso de búsqueda por dni
                busquedaDni(personas, 8,5)
            Caso 2:
                // Llamar al subproceso de ordenar por apellido
                ordenarApellido(personas, 8, 5)
            Caso 3:
                // Llamar al subproceso de ordenar por apellido y nombre (definir este subproceso)
                ordenarApellidoNombre(personas, 8, 5)
            Caso 4:
                // Llamar al subproceso de búsqueda por apellido y nombre (definir este subproceso)
                
            Caso 5:
                // Aquí puedes agregar otro menú de opciones
                ordenarPorEdad(personas, 8, 5)
            Caso 6:
                // Salir del programa
                Escribir "Saliendo del programa."
				salida = 1
            De Otro Modo:
                Escribir "Opción no válida. Por favor, intente de nuevo."
        Fin Segun
    FinMientras
FinAlgoritmo

SubProceso cargardatos(personas)
	personas[0,0]<-'Ana'
	personas[1,0]<-'Camila'
	personas[2,0]<-'Bruno'
	personas[3,0]<-'Dardo'
	personas[4,0]<-'Ernestina'
	personas[5,0]<-'Fausto'
	personas[6,0]<-'Jasmin'
	personas[7,0]<-'Leonardo'
	personas[0,1]<-'Martinez'
	personas[1,1]<-'Noe'
	personas[2,1]<-'Noe'
	personas[3,1]<-'Pistilli'
	personas[4,1]<-'Quesada'
	personas[5,1]<-'Ramirez'
	personas[6,1]<-'Sosa'
	personas[7,1]<-'Tolosa'
	personas[0,2]<-'17123456'
	personas[1,2]<-'25789101'
	personas[2,2]<-'39121314'
	personas[3,2]<-'21151617'
	personas[4,2]<-'33181920'
	personas[5,2]<-'15212223'
	personas[6,2]<-'40242526'
	personas[7,2]<-'11272829'
	personas[0,3]<-'+541141200011'
	personas[1,3]<-'+543419485831'
	personas[2,3]<-'+541145565789'
	personas[3,3]<-'+541158637543'
	personas[4,3]<-'+541158637543'
	personas[5,3]<-'+543423444567'
	personas[6,3]<-'+543402512345'
	personas[7,3]<-'+541151234567'
	personas[0,4]<-'56'
	personas[1,4]<-'45'
	personas[2,4]<-'26'
	personas[3,4]<-'48'
	personas[4,4]<-'35'
	personas[5,4]<-'60'
	personas[6,4]<-'25'
	personas[7,4]<-'70'
FinSubProceso

SubAlgoritmo  busquedaDni(personas, MAX_PERSONAS, MAX_CAMPOS)
    Definir dni_Buscar Como Cadena
    Definir i Como Entero
    Escribir "Ingrese el número de documento:"
    Leer dni_Buscar
    
    Para i = 0 Hasta MAX_PERSONAS - 1 Con Paso 1 Hacer
        Si dni_Buscar == personas[i,2] Entonces
			Escribir ""
            Escribir "Encontramos a la persona:"
            Escribir "Nombre: ", personas[i,0]
            Escribir "Apellido: ", personas[i,1]
            Escribir "DNI: ", personas[i,2]
            Escribir "Teléfono: ", personas[i,3]
            Escribir "Edad: ", personas[i,4]
			Escribir ""
        FinSi
    FinPara
	Escribir "no fue encontrado"
FinSubProceso

SubAlgoritmo  ordenarApellido(personas, MAX_PERSONAS, MAX_CAMPOS)
	definir pos_menor, i, j, k Como Entero
    Definir aux Como Cadena
    Para i = 0 Hasta MAX_PERSONAS - 2 Con Paso 1 Hacer
        pos_menor = i
        Para j = i + 1 Hasta MAX_PERSONAS -1 Con Paso 1 Hacer
            si(personas[j,1] < personas[pos_menor,1]) Entonces
                pos_menor = j
            FinSi
        FinPara
        Para j = 0 Hasta MAX_CAMPOS - 1 Hacer
            aux = personas[i,j]
            personas[i,j] = personas[pos_menor,j]
            personas[pos_menor,j] = aux
        FinPara
    FinPara
    
    Para i = 0 Hasta MAX_PERSONAS - 1 Hacer
		Escribir ""
        Escribir "Nombre: ", personas[i,0]
        Escribir "Apellido: ", personas[i,1]
        Escribir "DNI: ", personas[i,2]
        Escribir "Teléfono: ", personas[i,3]
        Escribir "Edad: ", personas[i,4]
		Escribir ""
    FinPara
FinSubProceso

SubAlgoritmo ordenarApellidoNombre(personas, MAX_PERSONAS, MAX_CAMPOS)
	definir pos_menor, i, j Como Entero
	Definir aux, valorMenor, valorComparar Como Cadena
	para i = 0 Hasta MAX_PERSONAS - 2 Con Paso 1 Hacer
		pos_menor = i
		Para j = i + 1 Hasta MAX_PERSONAS - 2 Con Paso 1 Hacer
			valorMenor = Concatenar(personas[pos_menor,1], personas[pos_menor,0])
			valorComparar = Concatenar(personas[j,1], personas[j,0])
			si(valorComparar < valorMenor) Entonces
				pos_menor = j
			FinSi
		FinPara
		Para j = 0 Hasta MAX_CAMPOS - 1 Hacer
            aux = personas[i,j]
            personas[i,j] = personas[pos_menor,j]
            personas[pos_menor,j] = aux
        FinPara
	FinPara
	Para i = 0 Hasta MAX_PERSONAS - 1 Hacer
		Escribir ""
        Escribir "Nombre: ", personas[i,0]
        Escribir "Apellido: ", personas[i,1]
        Escribir "DNI: ", personas[i,2]
        Escribir "Teléfono: ", personas[i,3]
        Escribir "Edad: ", personas[i,4]
		Escribir ""
    FinPara
FinSubProceso

SubAlgoritmo ordenarPorEdad(personas, MAX_PERSONAS, MAX_CAMPOS)
	Definir pos_menor, i, j Como Entero
	Definir aux Como Cadena
	
	Para  i = 0 Hasta MAX_PERSONAS - 2 Hacer
		pos_menor = i
		Para j = i + 1 Hasta MAX_PERSONAS - 1 Hacer
			si(ConvertirANumero(personas[pos_menor, 4]) < ConvertirANumero(personas[i,4]))
				pos_menor = j
			FinSi
		FinPara
		Para j = 0 Hasta MAX_CAMPOS - 1 Hacer
            aux = personas[i,j]
            personas[i,j] = personas[pos_menor,j]
            personas[pos_menor,j] = aux
        FinPara
	FinPara
	Para i = 0 Hasta MAX_PERSONAS - 1 Hacer
		Escribir ""
        Escribir "Nombre: ", personas[i,0]
        Escribir "Apellido: ", personas[i,1]
        Escribir "DNI: ", personas[i,2]
        Escribir "Teléfono: ", personas[i,3]
        Escribir "Edad: ", personas[i,4]
		Escribir ""
    FinPara
FinSubAlgoritmo
	