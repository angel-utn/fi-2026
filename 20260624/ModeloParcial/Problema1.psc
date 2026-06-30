Algoritmo Problema1
	totFe = 0
	totNoFe = 0
	noUtil = 0
	maxC = -1
	codMax = -1
	tipoMax = -1
	Escribir 'Codigo de metal: '
	Leer cod
	Mientras cod>=0 Hacer
		Escribir 'Tipo de metal: '
		Leer tipo
		Escribir 'Toneladas al inicio: '
		Leer tIni
		Escribir 'Toneladas al final: '
		Leer tFin
		cons = tIni-tFin
		Si tipo==1 Entonces
			totFe = totFe+cons
		SiNo
			totNoFe = totNoFe+cons
		FinSi
		Si cons==0 Entonces
			noUtil = noUtil+1
		FinSi
		Si cons>maxC Entonces
			maxC = cons
			codMax = cod
			tipoMax = tipo
		FinSi
		Escribir 'Codigo de metal: '
		Leer cod
	FinMientras
	totC = totFe+totNoFe
	Escribir 'A) Porcentaje consumido por tipo de metal sobre el total del mes:'
	Si totC>0 Entonces
		Escribir '   Ferroso:    ',(totFe/totC)*100,'%'
		Escribir '   No ferroso: ',(totNoFe/totC)*100,'%'
	SiNo
		Escribir '   No hubo consumo registrado en el mes.'
	FinSi
	Escribir 'B) Cantidad de metales que no se utilizaron: ',noUtil
	Escribir 'C) Metal con mayor consumo:'
	Escribir '   Codigo: ',codMax
	Si tipoMax==1 Entonces
		Escribir '   Tipo:   Ferroso'
	SiNo
		Escribir '   Tipo:   No ferroso'
	FinSi
	Escribir '   Consumo: ',maxC,' toneladas'
FinAlgoritmo
