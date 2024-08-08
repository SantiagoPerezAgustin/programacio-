Algoritmo sin_titulo
    Definir importeTotal, i, j Como Entero
    Definir profes Como cadena
    importeTotal = 0
    Dimension profes[4,5]
    // Cargamos los datos de los profesores
    CargarDatos(profes, 4, 8)
    // Calculamos el importe total
    Para i = 0 Hasta 4 - 1 Hacer
         + ((ConvertirANumero(profes[i, 0]) + ConvertirANumero(profes[i, 1])  + ConvertirANumero(profes[i, 2])  + ConvertirANumero(profes[i, 3]) + ConvertirANumero(profes[i,4]))) 
    FinPara
    // Calculamos y mostramos las horas de clase
    horasClase(profes, 4, 8, importeTotal)
FinAlgoritmo

SubAlgoritmo CargarDatos(profes, cant_profes, cant_campos)
    Definir i Como Entero
    Para i = 0 Hasta cant_profes - 1 Hacer
        Repetir
            Escribir "Ingresar importe de las horas trabajadas para el profesor ", profes[i, 0]
            Leer profes[i, 6]
        Mientras Que ConvertirANumero(profes[i , 6]) < 1
    FinPara
    Para i = 0 Hasta cant_profes - 1 Hacer
        Escribir "Ingresar las horas trabajadas por cada día de la semana para el profesor ", profes[i, 0]
        Escribir "Lunes: "
        Leer profes[i, 0]
        Escribir "Martes: "
        Leer profes[i, 1]
        Escribir "Miércoles: "
        Leer profes[i, 2]
        Escribir "Jueves: "
        Leer profes[i, 3]
        Escribir "Viernes: "
        Leer profes[i, 4]
    FinPara
FinSubAlgoritmo

SubAlgoritmo horasClase(profes, cant_profes, cant_campos, importeTotal)
    Definir i, j, pos_mayor Como Entero
    Definir aux Como cadena
    Para i = 0 Hasta cant_profes - 2 Hacer
        pos_mayor = i 
        Para j = i + 1 Hasta cant_profes - 1 Hacer
            Si ConvertirANumero(profes[pos_mayor, 6]) < ConvertirANumero(profes[j, 6]) Entonces
                pos_mayor = j
            FinSi
        FinPara
        Para j = 0 Hasta cant_campos - 1 Hacer
            aux = profes[pos_mayor, j]
            profes[pos_mayor, j] = profes[i, j]
            profes[i, j] = aux
        FinPara
    FinPara
    
    Para i = 0 Hasta cant_profes - 1 Hacer
        Escribir "Profesor: ", profes[i, 0]
        Escribir "Lunes: ", profes[i, 1]
        Escribir "Martes: ", profes[i, 2]
        Escribir "Miércoles: ", profes[i, 3]
        Escribir "Jueves: ", profes[i, 4]
        Escribir "Viernes: ", profes[i, 5]
        Escribir "El importe de hora es: ", profes[i, 6]
    FinPara
    Escribir "El importe total es de: ", importeTotal
FinSubAlgoritmo