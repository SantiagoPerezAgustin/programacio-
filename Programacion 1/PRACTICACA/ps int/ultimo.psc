Algoritmo sin_titulo
	Definir nombrecliente, clientesocio, finaldia Como Cadena
	Definir i, cantidaddelibros, contador Como Entero
	Definir montototal, montorecaudado, monto Como Real
	Repetir
		Escribir "Ingrese el nombre de la persona";
		Leer nombrecliente;
		Escribir "ingrese la cantidad de libros";
		Leer cantidaddelibros
		Para i<-1 Hasta cantidaddelibros Con Paso 1 Hacer
			Escribir "el precio del libro ", i
			Leer monto
			Escribir "el cliente es socio"
			Leer clientesocio
			Si clientesocio = "si" Entonces
				monto = monto * 0.90
			FinSi
			contador = contador + 1
			Si cantidaddelibros > 5 Entonces
				monto = monto * 0.95
			FinSi
		FinPara
		Escribir "hay mas ventas?"
	Mientras Que condicion
FinAlgoritmo
