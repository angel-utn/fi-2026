Algoritmo Problema1
	contMas30 = 0
	minIns = -1
	codMin = -1
	Escribir 'Codigo de curso: '
	Leer cod
	Mientras cod<>0 Hacer
		Escribir 'Cantidad de alumnos inscriptos: '
		Leer ins
		Escribir 'Cantidad de alumnos aprobados: '
		Leer apr
		porcApr = (apr/ins)*100
		Si porcApr>30 Entonces
			contMas30 = contMas30+1
		FinSi
		Si minIns==-1||ins<minIns Entonces
			minIns = ins
			codMin = cod
		FinSi
		Escribir 'Codigo de curso: '
		Leer cod
	FinMientras
	Escribir 'A) Cantidad de cursos con mas del 30% de aprobados: ',contMas30
	Escribir 'B) Curso con menos alumnos inscriptos: ',codMin
FinAlgoritmo
