#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3, tpi, suma;
    float promedio;

    cout << "Ingresar las tres notas de los parciales: " << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;

    cout << "Ingresar la nota del TPI: ";
    cin >> tpi;

    suma = n1 + n2 + n3;
    promedio = (float) suma / 3;

    if (promedio >= 7 || tpi > 9){
        cout << endl << "Aprobado" << endl;
    }
    else{
        cout << endl << "Desaprobado" << endl;
    }


    return 0;
}
