#include <iostream>
using namespace std;

int main(){
    int antiguedad, calificacion;
    float sueldo, bono, total;

    cout << "Ingresar sueldo: ";
    cin >> sueldo;

    cout << "Ingresar antigüedad: ";
    cin >> antiguedad;

    cout << "Ingresar calificación: ";
    cin >> calificacion;

    if (antiguedad > 3 && calificacion >= 8){
        bono = sueldo * 0.15;
    }
    else{
        bono = 0;
    }

    total = sueldo + bono;

    cout << "---------------------------" << endl;
    cout << "SUELDO: $ " << sueldo << endl;
    cout << "BONO  : $ " << bono << endl;
    cout << "TOTAL : $ " << total << endl;
    cout << "---------------------------" << endl;


    return 0;
}
