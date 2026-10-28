#include <iostream>
using namespace std;
#include <cmath>

int main(){
    float exponente = 2;
    float valor = 25;
    float raiz = sqrt(valor);
    cout << "Raíz: " << raiz << endl;

    float potencia = pow(raiz, exponente);
    cout << "Potencia: " << potencia << endl;

    cout << "Potencia 2 al cubo: " << pow(2.0f, 3.0f) << endl;
    cout << "Potencia 2 al cubo negativo: " << pow(2.0f, -3.0f) << endl;

    cout << "Valor absoluto -5.67: " << abs(-5.67f) << endl;
    cout << "Valor absoluto -15.167: " << abs(-15.167f) << endl;
    cout << "Valor absoluto 15.167: " << abs(15.167f) << endl;

    return 0;
}
