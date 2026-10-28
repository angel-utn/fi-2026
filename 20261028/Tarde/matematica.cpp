#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int exponente = 2;

    float valor = 25;
    float raiz = sqrt(valor);
    float potencia = pow(raiz, exponente);

    cout << "Raíz: " << raiz << endl;
    cout << "Potencia: " << potencia << endl;
    cout << "Potencia con exponente negativo: " << pow(3, -1) << endl;

    int n = -10;
    float m = -10.5f;
    float p = 10.5f;

    cout << abs(n) << endl;
    cout << abs(m) << endl;
    cout << abs(p) << endl;




    return 0;
}
