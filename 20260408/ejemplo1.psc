Algoritmo sin_titulo
	Escribir "Ingresar sueldo: "
	Leer sueldo
	Escribir "Ingresar antiguedad: "
	Leer ant
	Escribir "Ingresar calificacion: "
	Leer cali
	Si ant > 3 & cali >= 8 Entonces
		bono = sueldo * 0.15
	SiNo
		bono = 0
	FinSi
	total = sueldo + bono
	Escribir "SUELDO: $",sueldo
	Escribir "BONO: $", bono
	Escribir "TOTAL: $", total
FinAlgoritmo
