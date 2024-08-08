Algoritmo sin_titulo
	Definir A, B, C, D, E Como Cadena
	Definir Aventa, Bventa, Cventa, Dventa, Eventa Como Entero
	Definir sumaA, sumaB, sumaC, sumaD, sumaE Como Entero
	Definir comisionA, comisionB, comisionC, comisionD, comisionE Como Real
	A <- 'A'
	B <- 'B'
	C <- 'C'
	D <- 'D'
	E <- 'E'
	Repetir
		Escribir 'ingrese las ventas q hizo el vendedor ', A
		Leer Aventa
		Si Aventa=0 Entonces
			Escribir 'no ingresaste mas ventas'
		SiNo
			sumaA <- sumaA+Aventa
		FinSi
	Mientras Que Aventa<>0
	Escribir 'la suma del vendedor ', A, ' es ', sumaA
	Repetir
		Escribir 'ingrese las ventas q hizo el vendedor ', B
		Leer Bventa
		Si Bventa=0 Entonces
			Escribir 'no ingresaste mas ventas'
		SiNo
			sumaB <- sumaB+Bventa
		FinSi
	Mientras Que Bventa<>0
	Escribir 'la suma del vendedor ', B, ' es ', sumaB
	Repetir
		Escribir 'ingrese las ventas q hizo el vendedor ', C
		Leer Cventa
		Si Cventa=0 Entonces
			Escribir 'no ingresaste mas ventas'
		SiNo
			sumaC <- sumaC+Cventa
		FinSi
	Mientras Que Cventa<>0
	Escribir 'la suma del vendedor ', C, ' es ', sumaC
	Repetir
		Escribir 'ingrese las ventas q hizo el vendedor ', D
		Leer Dventa
		Si Dventa=0 Entonces
			Escribir 'no ingresaste mas ventas'
		SiNo
			sumaD <- sumaD+Dventa
		FinSi
	Mientras Que Dventa<>0
	Escribir 'la suma del vendedor ', D, ' es ', sumaD
	Repetir
		Escribir 'ingrese las ventas q hizo el vendedor ', E
		Leer Eventa
		Si Eventa=0 Entonces
			Escribir 'no ingresaste mas ventas'
		SiNo
			sumaE <- sumaE+Eventa
		FinSi
	Mientras Que Eventa<>0
	Escribir 'la suma del vendedor ', E ' es ', sumaE
	comisionA <- sumaA*0.025
	comisionB <- sumaB*0.025
	comisionC <- sumaC*0.025
	comisionD <- sumaD*0.025
	comisionE <- sumaE*0.025
	Escribir 'Al vendedor ', A, ' le corresponde el monto de ', comisionA
	Escribir 'Al vendedor ', B, ' le corresponde el monto de ', comisionB
	Escribir 'Al vendedor ', C, ' le corresponde el monto de ', comisionC
	Escribir 'Al vendedor ', D, ' le corresponde el monto de ', comisionD
	Escribir 'Al vendedor ', E, ' le corresponde el monto de ', comisionE
FinAlgoritmo
