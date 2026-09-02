/**
7)  Leer 50 números enteros y guardarlos en un vector. Determinar e informar cuál es el valor máximo y la posición de todos los iguales al máximo. (suponer que el máximo está repetido).
*/
#include <iostream>
using namespace std;

int main(){
    const int TAM = 10;
    int lista[TAM], i, maximo;

    /// Cargar el vector de TAM números
    cout << "Ingresar los numeros: " << endl;
    for(i=0; i<TAM; i++){
        cin >> lista[i];
    }

    /// Obtener el valor máximo del vector. Informarlo.
    maximo = lista[0];
    for(i=1; i<TAM; i++){
        if (lista[i] > maximo){
            maximo = lista[i];
        }
    }

    cout << endl << "El mas grande es: " << maximo << endl;
    cout << "Se encuentra en la posicion: " << endl;

    /// Buscar los elementos iguales al máximo. Mostrar posición.
    for(i=0; i<TAM; i++){
        if (lista[i] == maximo){
            cout << (i+1) << endl;
        }
    }

    return 0;
}
