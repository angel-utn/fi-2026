#include <iostream>
using namespace std;

int main() {
    const int CANT_PAISES = 34;

    int numeroPais;
    int cantidadHabitantes;
    int metrosCuadradosExtension;
    int zonaGeografica;
    float pbi;

    int cantidadPaisesNorte = 0;
    int cantidadPaisesSur = 0;
    int cantidadPaisesCentro = 0;

    float sumaPbi = 0;

    float minDensidadPoblacional = -1;
    int paisMenorDensidad = -1;

    for (int paisActual = 0; paisActual < CANT_PAISES; paisActual++) {
        cout << "Numero de pais: ";
        cin >> numeroPais;
        cout << "Cantidad de habitantes: ";
        cin >> cantidadHabitantes;
        cout << "Metros cuadrados de extension: ";
        cin >> metrosCuadradosExtension;
        cout << "Zona geografica (1: Norte, 2: Sur, 3: Centro): ";
        cin >> zonaGeografica;
        cout << "PBI: ";
        cin >> pbi;

        if (zonaGeografica == 1) {
            cantidadPaisesNorte++;
        } else if (zonaGeografica == 2) {
            cantidadPaisesSur++;
        } else {
            cantidadPaisesCentro++;
        }

        sumaPbi += pbi;

        float densidadPoblacional = (float)cantidadHabitantes / metrosCuadradosExtension;

        if (minDensidadPoblacional == -1 || densidadPoblacional < minDensidadPoblacional) {
            minDensidadPoblacional = densidadPoblacional;
            paisMenorDensidad = numeroPais;
        }
    }

    cout << "A) Zona geografica con mas paises: ";
    if (cantidadPaisesNorte > cantidadPaisesSur && cantidadPaisesNorte > cantidadPaisesCentro) {
        cout << "Norte" << endl;
    } else if (cantidadPaisesSur > cantidadPaisesCentro) {
        cout << "Sur" << endl;
    } else {
        cout << "Centro" << endl;
    }

    cout << "B) Pais con menor cantidad de habitantes por metro cuadrado: "
         << paisMenorDensidad << endl;

    cout << "C) Promedio de PBI entre todos los paises: "
         << sumaPbi / CANT_PAISES << endl;

    return 0;
}
