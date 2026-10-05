#include <iostream>
using namespace std;

int main() {
    const int CANT_PLANTAS = 40, FIN = 0;

    int planta, equipo, horas, severidad;
    char tipo;

    int horasPorPlanta[CANT_PLANTAS] = {0};
    int correctivasPorPlanta[CANT_PLANTAS] = {0};

    int horasCompresoresCorrectivas = 0;

    bool hayCoincidencias = false;

    cout << "Numero de planta (0 para terminar): ";
    cin >> planta;

    while (planta != FIN) {
        cout << "Codigo de equipo (1-70): ";
        cin >> equipo;
        cout << "Tipo de intervencion (P/C): ";
        cin >> tipo;
        cout << "Horas-hombre insumidas: ";
        cin >> horas;
        cout << "Nivel de severidad (1-5): ";
        cin >> severidad;

        horasPorPlanta[planta - 1] += horas;

        if (tipo == 'C') {
            correctivasPorPlanta[planta - 1]++;

            if (equipo >= 1 && equipo <= 10) {
                horasCompresoresCorrectivas += horas;
            }
        }

        cout << "Numero de planta (0 para terminar): ";
        cin >> planta;
    }

    cout << "a) Horas-hombre correctivas en compresores: " << horasCompresoresCorrectivas << endl;

    cout << "b) Plantas sin intervenciones correctivas:" << endl;
    for (int i = 0; i < CANT_PLANTAS; i++) {
        if (correctivasPorPlanta[i] == 0) {
            cout << "   Planta " << i + 1 << endl;
        }
    }

    cout << "c) Plantas con identica cantidad de horas-hombre:" << endl;
    for (int i = 0; i < CANT_PLANTAS; i++) {
        for (int j = i + 1; j < CANT_PLANTAS; j++) {
            if (horasPorPlanta[i] > 0 && horasPorPlanta[i] == horasPorPlanta[j]) {
                hayCoincidencias = true;
                cout << "   Plantas " << i + 1 << " y " << j + 1 << ": " << horasPorPlanta[i] << " horas" << endl;
            }
        }
    }

    if (!hayCoincidencias) {
        cout << "   No hay plantas con la misma cantidad de horas-hombre." << endl;
    }

    return 0;
}
