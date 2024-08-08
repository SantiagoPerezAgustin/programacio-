Algoritmo sin_titulo
	Definir marcas, marcaCorredores, promedio, sumaMarcas Como Real
	Definir i, menorPromedio, mayorPromedio Como Entero
	Dimensionar marcaCorredores(10)
	sumaMarcas <- 0
	mayorPromedio <- 0
	menorPromedio <- 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir 'ingrese las marca de lo corredores'
		Leer marcaCorredores[i]
		sumaMarcas <- sumaMarcas+marcaCorredores[i]
	FinPara
	promedio <- sumaMarcas/10
	Escribir 'el promedio es ', sumaMarcas
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Si marcaCorredores[i]>promedio Entonces
			mayorPromedio <- mayorPromedio+1
		SiNo
			menorPromedio <- menorPromedio+1
		FinSi
	FinPara
	Escribir 'las marcas mayores al prmedio son ', mayorPromedio
	Escribir 'los valores menores al promedio ', menorPromedio
FinAlgoritmo
