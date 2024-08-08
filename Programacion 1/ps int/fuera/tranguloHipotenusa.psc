Algoritmo tranguloHipotenusa
	definir cateto1, cateto2, hipotenusa, perimetro, superficie Como Real
	
	Escribir "el valor del primer cateto es "
	leer cateto1
	
	Escribir "el valor del segundo cateto es "
	leer cateto2
	
	hipotenusa = ((cateto1 ^ 2) + (cateto2 ^ 2))
	Escribir "el valor de la hipotenusa es ", hipotenusa
	
	perimetro = hipotenusa + cateto1 + cateto2
	Escribir "el valor de la superficie es ",perimetro
	
	superficie = 0.5 * cateto1 * cateto2
	Escribir "el valor de la superficie es ",superficie
	
FinAlgoritmo
