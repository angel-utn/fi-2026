Algoritmo Problema2
	totCerdos = 0
	totOvejas = 0
	totVacas = 0
	minPrim = -1
	codMin = -1
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		sinCerdos = 0
		totPrim = 0
		Escribir 'Codigo de productor: '
		Leer codProd
		Para a<-1 Hasta 2 Con Paso 1 Hacer
			Escribir 'Numero de anio: '
			Leer anio
			Escribir 'Cantidad de nacimientos de cerdos: '
			Leer nCerdos
			Escribir 'Cantidad de nacimientos de ovejas: '
			Leer nOvejas
			Escribir 'Cantidad de nacimientos de vacas: '
			Leer nVacas
			Si nCerdos==0 Entonces
				sinCerdos = sinCerdos+1
			FinSi
			Si anio==1 Entonces
				totPrim = nCerdos+nOvejas+nVacas
			FinSi
			totCerdos = totCerdos+nCerdos
			totOvejas = totOvejas+nOvejas
			totVacas = totVacas+nVacas
		FinPara
		Escribir 'A) Productor ',codProd,': ',sinCerdos,' anios sin produccion de cerdos.'
		Si minPrim==-1||totPrim<minPrim Entonces
			minPrim = totPrim
			codMin = codProd
		FinSi
	FinPara
	Escribir 'B) Productor con menos animales en el primer anio: ',codMin
	totAnim = totCerdos+totOvejas+totVacas
	Escribir 'C) Porcentaje de produccion total:'
	Si totAnim>0 Entonces
		Escribir '   Cerdos: ',(totCerdos/totAnim)*100,'%'
		Escribir '   Ovejas: ',(totOvejas/totAnim)*100,'%'
		Escribir '   Vacas:  ',(totVacas/totAnim)*100,'%'
	SiNo
		Escribir '   No se registraron nacimientos en el periodo.'
	FinSi
FinAlgoritmo
