Algoritmo sin_titulo
	definir saldo, retiro, actual Como entero
	sueldo = 10000
	Escribir "cuanta plata vas a retirar"
	Leer retiro
	si sueldo > retiro Entonces
		actual = sueldo - retiro
		Escribir "el sueldo actualizado es ", actual
	SiNo
		Escribir" no tenemos esa plata ahora"
	FinSi
FinAlgoritmo
