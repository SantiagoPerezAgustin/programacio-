Proceso principal
	Definir MAX_CAMPOS Como Entero
	MAX_CAMPOS <- 7
	Definir cant_articulos, accion, contador100, contador300, contador450, contador680, contador720 Como Entero
	Definir ferreteria, pedir_codigo Como cadena
	
    contador100 <- 0
    contador300 <- 0
    contador450 <- 0
    contador680 <- 0
    contador720 <- 0
	
    Escribir "Ingrese la cantidad de articulos:"
    Leer cant_articulos
	
	dimension ferreteria[cant_articulos, MAX_CAMPOS]
	
	
    cargaDatos(ferreteria, cant_articulos)
	
    Repetir
        Escribir "Ingrese una de las siguientes opciones:"
        Escribir "1. Mostrar lista de articulos ordenada por descripcion"
        Escribir "2. Mostrar lista de articulos ordenada por cantidad vendida"
        Escribir "3. Mostrar stock actual de articulos"
        Escribir "4. Buscar articulo por codigo"
        Escribir "5. Mostrar estadisticas"
        Escribir "6. Salir"
        Leer accion
		
        Segun accion Hacer
            Caso 1:
                ordenarPorDescripcion(ferreteria, cant_articulos, MAX_CAMPOS)
            Caso 2:
                ordenarPorVentas(ferreteria, cant_articulos, MAX_CAMPOS)
            Caso 3:
                mostrarStock(ferreteria, cant_articulos)
            Caso 4:
                Escribir "Ingrese el codigo del articulo"
                Leer pedir_codigo
                Mientras No validarCodigo(pedir_codigo) Hacer
                    Escribir "Ha ingresado un codigo invalido. Ingreselo nuevamente:"
                    Leer pedir_codigo
                FinMientras
                mostrarArticuloXCodigo(ferreteria, pedir_codigo, cant_articulos)
            Caso 5:
                contadorRubros(ferreteria, cant_articulos, contador100, contador300, contador450, contador680, contador720)
                artVendidosXRubro(ferreteria, cant_articulos, contador100, contador300, contador450, contador680, contador720)
                rubroMayorImporte(ferreteria, cant_articulos)
            Caso 6:
                Escribir "El programa ha finalizado"
            De Otro Modo:
                Escribir "Ha ingresado una opcion invalida."
        FinSegun
    Hasta Que accion = 6
	
    Escribir "Gracias por elegirnos. Atte. EL TORNILLO LOCO"
FinProceso

SubProceso cargaDatos(ferreteria, cant_articulos)
    Definir i Como Entero
    Escribir "Cargando datos"
    Para i <- 1 Hasta cant_articulos Con Paso 1 Hacer
        Escribir "Ingrese el codigo del articulo ", i, ":"
        Leer ferreteria[i, 1]
        Mientras No validarCodigo(ferreteria[i, 1]) Hacer
            Escribir "Ha ingresado un codigo invalido. Ingreselo nuevamente:"
            Leer ferreteria[i, 1]
        FinMientras
		
        Escribir "Ingrese la descripcion del articulo ", i, ":"
        Leer ferreteria[i, 2]
		
        Escribir "Ingrese el precio de venta del articulo ", i, ":"
        Leer ferreteria[i, 3]
		
        Escribir "Ingrese la cantidad existente del articulo ", i, ":"
        Leer ferreteria[i, 4]
		
        Escribir "Ingrese la cantidad vendida en la primera quincena del articulo ", i, ":"
        Leer ferreteria[i, 5]
		
        Escribir "Ingrese la cantidad vendida en la segunda quincena del articulo ", i, ":"
        Leer ferreteria[i, 6]
		
        ferreteria[i, 7] <- ConvertirATexto(ConvertirANumero(ferreteria[i, 5]) + ConvertirANumero(ferreteria[i, 6]))
    FinPara
    Escribir "Se han cargado todos los articulos"
FinSubProceso

Funcion validez <- validarCodigo(codigo)
    Definir i, cant_rubros, rubro_ingresado Como Entero
    Definir rubros Como Entero
	Dimension rubros[5]
    rubros[1] <- 100
    rubros[2] <- 300
    rubros[3] <- 450
    rubros[4] <- 680
    rubros[5] <- 720
    cant_rubros <- 5
	
	rubro_ingresado <- trunc(ConvertirANumero(codigo)/100000)
	
	Para i <- 1 Hasta cant_rubros Con Paso 1 Hacer
		Si rubro_ingresado = rubros[i] Entonces
			validez <- Verdadero
			terminar <- Verdadero
		FinSi
	FinPara
	si terminar == Falso entonces
		validez <- Falso
	FinSi
FinFuncion

SubProceso contadorRubros(ferreteria, cant_articulos, contador100 Por Referencia, contador300 Por Referencia, contador450 Por Referencia, contador680 Por Referencia, contador720 Por Referencia)
    Definir i, rubro_ingresado, ventas_totales Como Entero
    ventas_totales <- 0
	
    Para i <- 1 Hasta cant_articulos Con Paso 1 Hacer
        rubro_ingresado <- ConvertirANumero(Subcadena(ferreteria[i, 1], 1, 3))
        Segun rubro_ingresado Hacer
            Caso 100:
                contador100 <- contador100 + ConvertirANumero(ferreteria[i, 7])
            Caso 300:
                contador300 <- contador300 + ConvertirANumero(ferreteria[i, 7])
            Caso 450:
                contador450 <- contador450 + ConvertirANumero(ferreteria[i, 7])
            Caso 680:
                contador680 <- contador680 + ConvertirANumero(ferreteria[i, 7])
            Caso 720:
                contador720 <- contador720 + ConvertirANumero(ferreteria[i, 7])
            De Otro Modo:
                Escribir "Error. Rubro inexistente."
        FinSegun
        ventas_totales <- ventas_totales + ConvertirANumero(ferreteria[i, 7])
    FinPara
	
    Escribir "A) Porcentajes de ventas por rubro sobre el total de ventas:"
    Escribir "Procentaje de ventas rubro 100: ", (contador100 / ventas_totales) * 100, "%"
    Escribir "Procentaje de ventas rubro 300: ", (contador300 / ventas_totales) * 100, "%"
    Escribir "Procentaje de ventas rubro 450: ", (contador450 / ventas_totales) * 100, "%"
    Escribir "Procentaje de ventas rubro 680: ", (contador680 / ventas_totales) * 100, "%"
    Escribir "Procentaje de ventas rubro 720: ", (contador720 / ventas_totales) * 100, "%"
	Escribir "-------------------------------------------------------------------"
FinSubProceso

SubProceso artVendidosXRubro(ferreteria, cant_articulos, contador100 Por Referencia, contador300 Por Referencia, contador450 Por Referencia, contador680 Por Referencia, contador720 Por Referencia)
    Definir i, rubro_ingresado Como Entero
    Definir contador100_1, contador300_1, contador450_1, contador680_1, contador720_1 Como Entero
    Definir contador100_2, contador300_2, contador450_2, contador680_2, contador720_2 Como Entero
	
    contador100_1 <- 0
    contador300_1 <- 0
    contador450_1 <- 0
    contador680_1 <- 0
    contador720_1 <- 0
	
    contador100_2 <- 0
    contador300_2 <- 0
    contador450_2 <- 0
    contador680_2 <- 0
    contador720_2 <- 0
	
    Para i <- 1 Hasta cant_articulos Con Paso 1 Hacer
        rubro_ingresado <- ConvertirANumero(Subcadena(ferreteria[i, 1], 1, 3))
        Segun rubro_ingresado Hacer
            Caso 100:
                contador100_1 <- contador100_1 + ConvertirANumero(ferreteria[i, 5])
                contador100_2 <- contador100_2 + ConvertirANumero(ferreteria[i, 6])
            Caso 300:
                contador300_1 <- contador300_1 + ConvertirANumero(ferreteria[i, 5])
                contador300_2 <- contador300_2 + ConvertirANumero(ferreteria[i, 6])
            Caso 450:
                contador450_1 <- contador450_1 + ConvertirANumero(ferreteria[i, 5])
                contador450_2 <- contador450_2 + ConvertirANumero(ferreteria[i, 6])
            Caso 680:
                contador680_1 <- contador680_1 + ConvertirANumero(ferreteria[i, 5])
                contador680_2 <- contador680_2 + ConvertirANumero(ferreteria[i, 6])
            Caso 720:
                contador720_1 <- contador720_1 + ConvertirANumero(ferreteria[i, 5])
                contador720_2 <- contador720_2 + ConvertirANumero(ferreteria[i, 6])
            De Otro Modo:
                Escribir "Error. Rubro inexistente."
        FinSegun
    FinPara
	
    Escribir "B) Articulos vendidos por rubro y por quincena:"
    Escribir "Rubro 100, Primera quincena: ", contador100_1, " y Segunda quincena: ", contador100_2
    Escribir "Rubro 300, Primera quincena: ", contador300_1, " y Segunda quincena: ", contador300_2
    Escribir "Rubro 450, Primera quincena: ", contador450_1, " y Segunda quincena: ", contador450_2
    Escribir "Rubro 680, Primera quincena: ", contador680_1, " y Segunda quincena: ", contador680_2
    Escribir "Rubro 720, Primera quincena: ", contador720_1, " y Segunda quincena: ", contador720_2
	Escribir "-------------------------------------------------------------------"
FinSubProceso

SubProceso rubroMayorImporte(ferreteria, cant_articulos)
    Definir montos_totales Como Real
	Dimension montos_totales[5, 2]
    Definir rubro_mayor_1, rubro_mayor_2, rubros Como Entero
	rubro_mayor_1 = 1
	rubro_mayor_2 = 1
	Dimension rubros[5]
    rubros[1] <- 100
    rubros[2] <- 300
    rubros[3] <- 450
    rubros[4] <- 680
    rubros[5] <- 720
	
    Para i <- 1 Hasta cant_articulos Con Paso 1 Hacer
        segun (trunc(ConvertirANumero(ferreteria[i, 1]) / 100000)) hacer
            100:
                montos_totales[1, 1] <- montos_totales[1, 1] + ConvertirANumero(ferreteria[i, 3]) * ConvertirANumero(ferreteria[i, 5])
                montos_totales[1, 2] <- montos_totales[1, 2] + ConvertirANumero(ferreteria[i, 3]) * ConvertirANumero(ferreteria[i, 6])
            300:
                montos_totales[2, 1] <- montos_totales[2, 1] + ConvertirANumero(ferreteria[i, 3]) * ConvertirANumero(ferreteria[i, 5])
                montos_totales[2, 2] <- montos_totales[2, 2] + ConvertirANumero(ferreteria[i, 3]) * ConvertirANumero(ferreteria[i, 6])
            450:
                montos_totales[3, 1] <- montos_totales[3, 1] + ConvertirANumero(ferreteria[i, 3]) * ConvertirANumero(ferreteria[i, 5])
                montos_totales[3, 2] <- montos_totales[3, 2] + ConvertirANumero(ferreteria[i, 3]) * ConvertirANumero(ferreteria[i, 6])
            680:
                montos_totales[4, 1] <- montos_totales[4, 1] + ConvertirANumero(ferreteria[i, 3]) * ConvertirANumero(ferreteria[i, 5])
                montos_totales[4, 2] <- montos_totales[4, 2] + ConvertirANumero(ferreteria[i, 3]) * ConvertirANumero(ferreteria[i, 6])
            720:
                montos_totales[5, 1] <- montos_totales[5, 1] + ConvertirANumero(ferreteria[i, 3]) * ConvertirANumero(ferreteria[i, 5])
                montos_totales[5, 2] <- montos_totales[5, 2] + ConvertirANumero(ferreteria[i, 3]) * ConvertirANumero(ferreteria[i, 6])
        FinSegun
    FinPara
    
    Escribir ""
    Escribir "C) Rubro con mayor importe total de ventas en cada quincena:"
    Escribir ""
	
    Para i <- 1 Hasta 5 Con Paso 1 Hacer
        Si montos_totales[rubro_mayor_1, 1] < montos_totales[i, 1] Entonces
            rubro_mayor_1 <- i
        FinSi
        Si montos_totales[rubro_mayor_2, 2] < montos_totales[i, 2] Entonces
            rubro_mayor_2 <- i
        FinSi
    FinPara
	
    Escribir "El rubro con el importe mayor de la primera quincena es: ", rubros[rubro_mayor_1]
    Escribir "El rubro con el importe mayor de la segunda quincena es: ", rubros[rubro_mayor_2]
FinSubProceso


SubProceso mostrarArticuloXCodigo(ferreteria, pedir_codigo, cant_articulos)
    Definir i, posicion Como Entero
    posicion <- -1
	
    Para i <- 1 Hasta cant_articulos Con Paso 1 Hacer
        Si ferreteria[i, 1] = pedir_codigo Entonces
            posicion <- i
        FinSi
    FinPara
	
    Si posicion = -1 Entonces
        Escribir "No se encontr? el articulo."
		Escribir "-------------------------------------------------------------------"
    SiNo
        Escribir "El articulo buscado es: "
        Escribir "Codigo: ", ferreteria[posicion, 1]
        Escribir "Descripcion: ", ferreteria[posicion, 2]
        Escribir "Precio de venta: $", ferreteria[posicion, 3]
        Escribir "Stock: ", ConvertirANumero(ferreteria[posicion, 4]) - ConvertirANumero(ferreteria[posicion, 7])
        Escribir "Cantidad vendida primera quincena: ", ferreteria[posicion, 5]
        Escribir "Cantidad vendida segunda quincena: ", ferreteria[posicion, 6]
		Escribir "-------------------------------------------------------------------"
    FinSi
FinSubProceso

SubProceso ordenarPorDescripcion(ferreteria Por Referencia, cant_articulos, MAX_CAMPOS)
    Definir i, j, k, pos_menor Como Entero
    Definir temp Como Texto
	
	Para i <- 1 Hasta cant_articulos - 1 Con Paso 1 Hacer
		pos_menor <- i
        Para j <- i+1 Hasta cant_articulos Con Paso 1 Hacer
			si ferreteria[j, 2] < ferreteria[pos_menor, 2] Entonces
				pos_menor <- j
			FinSi
        FinPara
		
		Para j = 1 Hasta MAX_CAMPOS Con Paso 1 Hacer
			temp = ferreteria[i, j]
			ferreteria[i, j] = ferreteria[pos_menor, j]
			ferreteria[pos_menor, j] = temp
		FinPara
    FinPara
	
    Para i <- 1 Hasta cant_articulos Con Paso 1 Hacer
        Escribir "Codigo: ", ferreteria[i, 1]
        Escribir "Descripcion: ", ferreteria[i, 2]
        Escribir "Precio de venta: $", ferreteria[i, 3]
		Escribir "-------------------------------------------------------------------"
    FinPara
FinSubProceso

SubProceso ordenarPorVentas(ferreteria Por Referencia, cant_articulos, MAX_CAMPOS)
    Definir i, j, k, pos_mayor Como Entero
    Definir temp Como Texto
	
    Para i <- 1 Hasta cant_articulos - 1 Con Paso 1 Hacer
		pos_mayor <- i
        Para j <- i+1 Hasta cant_articulos Con Paso 1 Hacer
			si ConvertirANumero(ferreteria[j, 7]) > ConvertirANumero(ferreteria[pos_mayor, 7]) Entonces
				pos_mayor <- j
			FinSi
        FinPara
		
		Para j = 1 Hasta MAX_CAMPOS Con Paso 1 Hacer
			temp = ferreteria[i, j]
			ferreteria[i, j] = ferreteria[pos_mayor, j]
			ferreteria[pos_mayor, j] = temp
		FinPara
    FinPara
	
    Para i <- 1 Hasta cant_articulos Con Paso 1 Hacer
        Escribir "Codigo: ", ferreteria[i, 1]
        Escribir "Descripcion: ", ferreteria[i, 2]
        Escribir "Cantidad vendida mensual: ", ferreteria[i, 7]
		Escribir "Monto total mensual: $", ConvertirANumero(ferreteria[i, 7])*ConvertirANumero(ferreteria[i, 3])
		Escribir "-------------------------------------------------------------------"
    FinPara
FinSubProceso

SubProceso mostrarStock(ferreteria, cant_articulos)
    Definir i Como Entero
	
    Para i <- 1 Hasta cant_articulos Con Paso 1 Hacer
        Escribir "Codigo: ", ferreteria[i, 1]
        Escribir "Descripcion: ", ferreteria[i, 2]
		Escribir "Stock : " ConvertirANumero(ferreteria[i, 4]) - ConvertirANumero(ferreteria[i, 7])
		Escribir "-------------------------------------------------------------------"
    FinPara
FinSubProceso