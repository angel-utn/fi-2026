Algoritmo Problema2
	cNorte = 0
	cSur = 0
	cCentro = 0
	sumPbi = 0
	minDens = -1
	paisMinDens = -1
	Para i<-1 Hasta 34 Con Paso 1 Hacer
		Escribir 'Numero de pais: '
		Leer nPais
		Escribir 'Cantidad de habitantes: '
		Leer hab
		Escribir 'Metros cuadrados de extension: '
		Leer mts
		Escribir 'Zona geografica (1: Norte, 2: Sur, 3: Centro): '
		Leer zona
		Escribir 'PBI: '
		Leer pbi
		Si zona==1 Entonces
			cNorte = cNorte+1
		SiNo
			Si zona==2 Entonces
				cSur = cSur+1
			SiNo
				cCentro = cCentro+1
			FinSi
		FinSi
		sumPbi = sumPbi+pbi
		dens = hab/mts
		Si minDens==-1||dens<minDens Entonces
			minDens = dens
			paisMinDens = nPais
		FinSi
	FinPara
	Escribir 'A) Zona geografica con mas paises: '
	Si cNorte>cSur&&cNorte>cCentro Entonces
		Escribir 'Norte'
	SiNo
		Si cSur>cCentro Entonces
			Escribir 'Sur'
		SiNo
			Escribir 'Centro'
		FinSi
	FinSi
	Escribir 'B) Pais con menor cantidad de habitantes por metro cuadrado: ',paisMinDens
	Escribir 'C) Promedio de PBI entre todos los paises: ',sumPbi/34
FinAlgoritmo
