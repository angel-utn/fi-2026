#include <iostream>
using namespace std;

int main() {
    int metalCodigo, metalTipo;
    float toneladasInicio, toneladasFin, consumo;

    float totalConsumoFerroso = 0;
    float totalConsumoNoFerroso = 0;
    float totalConsumo = 0;
    int cantidadMetalesNoUtilizados = 0;

    float maxConsumo = -1;
    int codigoMaxConsumo = -1;
    int tipoMaxConsumo = -1;

    cout << "Codigo de metal: ";
    cin >> metalCodigo;

    while (metalCodigo >= 0) {
        cout << "Tipo de metal: ";
        cin >> metalTipo;
        cout << "Toneladas al inicio: ";
        cin >> toneladasInicio;
        cout << "Toneladas al final: ";
        cin >> toneladasFin;

        consumo = toneladasInicio - toneladasFin;

        if (metalTipo == 1) {
            totalConsumoFerroso += consumo;
        } else {
            totalConsumoNoFerroso += consumo;
        }

        if (consumo == 0) {
            cantidadMetalesNoUtilizados++;
        }

        if (consumo > maxConsumo) {
            maxConsumo = consumo;
            codigoMaxConsumo = metalCodigo;
            tipoMaxConsumo = metalTipo;
        }

        cout << "Codigo de metal: ";
        cin >> metalCodigo;
    }

    totalConsumo = totalConsumoFerroso + totalConsumoNoFerroso;

    cout << "A) Porcentaje consumido por tipo de metal sobre el total del mes:" << endl;
    if (totalConsumo > 0) {
        cout << "   Ferroso:    " << (totalConsumoFerroso / totalConsumo) * 100 << "%" << endl;
        cout << "   No ferroso: " << (totalConsumoNoFerroso / totalConsumo) * 100 << "%" << endl;
    } else {
        cout << "   No hubo consumo registrado en el mes." << endl;
    }

    cout << "B) Cantidad de metales que no se utilizaron: " << cantidadMetalesNoUtilizados << endl;

    cout << "C) Metal con mayor consumo:" << endl;
    cout << "   Codigo: " << codigoMaxConsumo << endl;
    if (tipoMaxConsumo == 1) {
        cout << "   Tipo:   Ferroso" << endl;
    } else {
        cout << "   Tipo:   No ferroso" << endl;
    }
    cout << "   Consumo: " << maxConsumo << " toneladas" << endl;

    return 0;
}
