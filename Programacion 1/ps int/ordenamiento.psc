Algoritmo sin_titulo
	
	Definir arreglo, dni Como Caracter;
	Definir indice_persona, op Como Entero;
	Dimension arreglo[8,5];
	
	CargaDatos(arreglo)  //Se cargan los datos iniciales de las arreglo
	
	Repetir //Men? de opciones
		Escribir "1- Busqueda secuencial por DNI"
		Escribir "2- Mostrar lista ordenada por apellido"
		Escribir "5- salir "
		Leer op
		Segun op
			1: 	Escribir "Busqueda secuencial por DNI"
				Leer dni
				indice_persona=BusquedaSecuencial(arreglo,8,2,dni)
				si indice_persona <>-1
					MostrarPersona(arreglo, indice_persona, 5)
				SiNo
					Mostrar "Persona no encontrada"
				FinSi
				
			2:  OrdenarDecreciente(arreglo,8,5,1);
				MostrarArreglo(arreglo,8,5)
				
			5:	Escribir "Adios"
		FinSegun
	Hasta Que op=5
FinProceso

SubProceso i <- BusquedaSecuencial(arreglo, cant_datos ,campo_busqueda, campo_ingresado)
    Definir i, j Como Entero;
	Definir encontrado Como Logico
	encontrado=falso
    i = 0;
    Mientras i <= cant_datos-1 y !encontrado Hacer
        Si arreglo[i,campo_busqueda] = campo_ingresado Entonces
			Encontrado=Verdadero
        SiNo
			i = i + 1;
        FinSi
    FinMientras
	
	Si !encontrado
		i=-1
	FinSi
FinSubProceso

SubProceso CargaDatos(arreglo)
	arreglo[0,0] = "Ana";
	arreglo[1,0] = "Camila";
	arreglo[2,0] = "Bruno";
	arreglo[3,0] = "Dardo";
	arreglo[4,0] = "Ernestina";
	arreglo[5,0] = "Fausto";
	arreglo[6,0] = "Jasmin";
	arreglo[7,0] = "Leonardo";
	
	arreglo[0,1] = "Martinez";
	arreglo[1,1] = "Noe";
	arreglo[2,1] = "Noe";
	arreglo[3,1] = "Pistilli";
	arreglo[4,1] = "Quesada";
	arreglo[5,1] = "Ramirez";
	arreglo[6,1] = "Sosa";
	arreglo[7,1] = "Tolosa";
	
	arreglo[0,2] = "17123456";
	arreglo[1,2] = "25789101";
	arreglo[2,2] = "39121314";
	arreglo[3,2] = "21151617";
	arreglo[4,2] = "33181920";
	arreglo[5,2] = "15212223";
	arreglo[6,2] = "40242526";
	arreglo[7,2] = "11272829";
	
	arreglo[0,3] = "+541141200011";
	arreglo[1,3] = "+543419485831";
	arreglo[2,3] = "+541145565789";
	arreglo[3,3] = "+541158637543";
	arreglo[4,3] = "+541158637543";
	arreglo[5,3] = "+543423444567";
	arreglo[6,3] = "+543402512345";
	arreglo[7,3] = "+541151234567";
	
	arreglo[0,4] = "56";
	arreglo[1,4] = "45";
	arreglo[2,4] = "26";
	arreglo[3,4] = "48";
	arreglo[4,4] = "35";
	arreglo[5,4] = "60";
	arreglo[6,4] = "25";
	arreglo[7,4] = "70";
FinSubProceso

SubProceso  MostrarPersona(arreglo, indice_persona, cant_campos)
	Definir j Como Entero
	Para j<-0 hasta cant_campos-1	
		mostrar Sin Saltar arreglo[indice_persona,j], " "
	FinPara
    Mostrar ""
FinSubProceso

SubProceso OrdenarDecreciente (arreglo, cant_datos, cant_campos, campo_a_ordenar)
	Definir i, j, pos_menor Como Entero
	Definir aux Como Caracter 
	Para i<-0 Hasta cant_datos-2 Hacer
		pos_menor<-i 
		//Comparo el valor menor encontrado hasta el momento con c/u de los valores de la derecha de ?ste
		Para j<-i+1 Hasta cant_datos-1 Hacer
			Si   arreglo[j,campo_a_ordenar]<arreglo[pos_menor,campo_a_ordenar] Entonces
				pos_menor<-j
			FinSi
		FinPara
		
		//Cambio posiciones
		Para j <- 0 Hasta cant_campos-1
			aux<-arreglo[i,j]
			arreglo[i,j]<-arreglo[pos_menor,j]
			arreglo[pos_menor,j]<-aux
		Fin Para
	FinPara	
FinSubProceso

SubProceso  MostrarArreglo(arreglo, cant_datos, cant_campos)
	Definir i,j como entero
	Para i=0 hasta cant_datos-1 con paso 1 hacer
		Para j=0 hasta cant_campos-1 con paso 1 hacer
			mostrar Sin Saltar arreglo[i,j], " "
		FinPara
		Mostrar ""
	FinPara
FinSubProceso
