/**
   Cargar un vector de 10 número enteros. Luego ingresar 5 números e informar
   si los números ingresados existían dentro del vector.
   NOTA: se debe informar al final del ingreso de los 5 números de la siguiente manera:

    Número ingresado    Resultado
    5                   NO ESTÁ DENTRO DEL VECTOR
    8                   ESTÁ DENTRO DEL VECTOR
    12                  NO ESTÁ DENTRO DEL VECTOR
    -8                  ESTÁ DENTRO DEL VECTOR
    45                  NO ESTÁ DENTRO DEL VECTOR
*/

#include <iostream>
using namespace std;

int main(){
    int lista[10], buscados[5], i, k;
    bool existe[5] = {};

    cout << "Ingresar 10 numeros enteros: " << endl;
    for(i=0; i<10; i++){
        cin >> lista[i];
    }

    cout << "Ingresar 5 numeros enteros: " << endl;
    for (i=0; i<5; i++){
        cin >> buscados[i];
    }

    cout << endl;
    // Buscar los elementos de buscados dentro de lista
    for (i=0; i<5; i++){
        for(k=0; k<10; k++){
            if (buscados[i] == lista[k]){
                existe[i] = true;
            }
        }
    }


    for(i=0; i<5; i++){

        if (existe[i] == true){
            cout << "El valor " << buscados[i] << " existe" << endl;
        }
        else{
            cout << "El valor " << buscados[i] << " no existe" << endl;
        }

    }

    return 0;
}
