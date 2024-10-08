Algoritmo sin_titulo
	
	Definir personas,dni Como Caracter
	Definir indice_persona,op Como Entero
	Dimension personas[8,5]
	CargaDatos(personas) // Se cargan los datos iniciales de las personas
	Escribir 'Busqueda secuencial por DNI'
	Leer dni
	indice_persona <- BusquedaSecuencial(personas,8,2,dni)
	Si indice_persona<>-1 Entonces
		MostrarPersona(personas,indice_persona,5)
	SiNo
		Escribir 'Persona no encontrada'
	FinSi
FinAlgoritmo

SubAlgoritmo i <- BusquedaSecuencial(arreglo,cant_datos,campo_busqueda,campo_ingresado)
	Definir i,j Como Entero
	Definir encontrado Como Logico
	encontrado <- falso
	i <- 0
	Mientras i<=cant_datos-1 Y !encontrado Hacer
		Si arreglo[i,campo_busqueda]=campo_ingresado Entonces
			encontrado <- Verdadero
		SiNo
			i <- i+1
		FinSi
	FinMientras
	Si !encontrado Entonces
		i <- -1
	FinSi
FinSubAlgoritmo

SubAlgoritmo CargaDatos(personas)
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
FinSubAlgoritmo

SubAlgoritmo MostrarPersona(personas,indice_persona,cant_campos)
	Definir j Como Entero
	Para j<-0 Hasta cant_campos-1 Hacer
		Escribir personas[indice_persona,j],' ' Sin Saltar
	FinPara
	Escribir ''
FinSubAlgoritmo

