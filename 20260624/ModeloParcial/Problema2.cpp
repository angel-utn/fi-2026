#include <iostream>
using namespace std;

int main() {
    const int CANT_PRODUCTORES = 3, CANT_ANIOS = 2;

    int codigoProductor, numeroAnio, cantidadNacimientosCerdos, cantidadNacimientosOvejas, cantidadNacimientosVacas;
    int totalCerdos = 0, totalOvejas = 0, totalVacas = 0;

    int minAnimalesPrimerAnio = -1, codigoProductorMenosAnimales = -1, aniosSinCerdos, totalAnimalesPrimerAnio, totalAnimales;

    for (int i = 0; i < CANT_PRODUCTORES; i++) {
        aniosSinCerdos = 0;
        totalAnimalesPrimerAnio = 0;

        cout << "Codigo de productor: ";
        cin >> codigoProductor;

        for (int anioActual = 0; anioActual < CANT_ANIOS; anioActual++) {

            cout << "Numero de anio: ";
            cin >> numeroAnio;

            cout << "Cantidad de nacimientos de cerdos: ";
            cin >> cantidadNacimientosCerdos;

            cout << "Cantidad de nacimientos de ovejas: ";
            cin >> cantidadNacimientosOvejas;

            cout << "Cantidad de nacimientos de vacas: ";
            cin >> cantidadNacimientosVacas;

            if (cantidadNacimientosCerdos == 0) {
                aniosSinCerdos++;
            }

            if (numeroAnio == 1) {
                totalAnimalesPrimerAnio = cantidadNacimientosCerdos
                                        + cantidadNacimientosOvejas
                                        + cantidadNacimientosVacas;
            }

            totalCerdos += cantidadNacimientosCerdos;
            totalOvejas += cantidadNacimientosOvejas;
            totalVacas  += cantidadNacimientosVacas;
        }

        cout << "A) Productor " << codigoProductor
             << ": " << aniosSinCerdos
             << " años sin producción de cerdos." << endl;

        if (minAnimalesPrimerAnio == -1 || totalAnimalesPrimerAnio < minAnimalesPrimerAnio) {
            minAnimalesPrimerAnio = totalAnimalesPrimerAnio;
            codigoProductorMenosAnimales = codigoProductor;
        }
    }

    cout << "B) Productor con menos animales en el primer año: "
         << codigoProductorMenosAnimales << endl;

    totalAnimales = totalCerdos + totalOvejas + totalVacas;

    cout << "C) Porcentaje de producción total:" << endl;
    if (totalAnimales > 0) {
        cout << "   Cerdos: " << (float)totalCerdos / totalAnimales * 100 << "%" << endl;
        cout << "   Ovejas: " << (float)totalOvejas / totalAnimales * 100 << "%" << endl;
        cout << "   Vacas:  " << (float)totalVacas  / totalAnimales * 100 << "%" << endl;
    } else {
        cout << "   No se registraron nacimientos en el período." << endl;
    }

    return 0;
}
