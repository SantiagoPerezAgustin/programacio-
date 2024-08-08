Algoritmo sin_titulo
	Definir dni, pass, saldo, cbu, dniIngresado, passIngresado, intentos, ingresadoCorrectamente, opcionn Como Entero
	dni = 35654123
	pass = 1234
	saldo = 150000
	cbu = 986323456
	dniIngresado = 0
	passIngresado = 0
	intentos = 1
	ingresadoCorrectamente = 0
	Repetir
		Escribir "ingrese numero ", intentos
		Escribir "ingrese dni"
		leer dniIngresado
		Escribir "ingresar contraseñas"
		leer passIngresado
		
		si dni <> dniIngresado y pass <> passIngresado Entonces
			escribir "incorrecto"
			intentos = intentos + 1
		SiNo
			Escribir "los datos son validos"
		FinSi
		
		si intentos == 4 Entonces
			Escribir "se agotaron los intentos"
			Limpiar Pantalla
		FinSi
	Mientras Que dni <> dniIngresado y pass <> passIngresado y intentos < 4
	si dni = dniIngresado y pass = passIngresado y intentos <= 3 Entonces
		
	
	Repetir
		Escribir "1 para ver el saldo"
		si opcionn == 1 Entonces
			Escribir "el saldo es ", saldo
		FinSi
		Escribir "2 para ver el cbu"
		si opcionn == 2 Entonces
			Escribir "el cbu es ", cbu
		FinSi
		Escribir "3 para salir"
		Leer opcionn
		si opcionn >= 4 Entonces
			Escribir "opcion incorrecta"
		FinSi
	Mientras Que opcionn <> 3
SiNo
	Escribir "te quedaste sin intentos"
	FinSi
FinAlgoritmo
