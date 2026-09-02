/**
7)  Leer 50 números enteros y guardarlos en un vector. Determinar e informar cuál es el valor mínimo y la posición de todos los iguales al mínimo. (suponer que el mínimo está repetido).
*/
#include <iostream>
using namespace std;

int main(){
    const int TAM = 10;
    int lista[TAM], i, minimo;

    /// Cargar el vector de TAM números
    cout << "Ingresar los numeros: " << endl;
    for(i=0; i<TAM; i++){
        cin >> lista[i];
    }

    /// Obtener el valor mínimo del vector. Informarlo.
    minimo = lista[0];
    for(i=1; i<TAM; i++){
        if (lista[i] < minimo){
            minimo = lista[i];
        }
    }

    cout << endl << "El mas chico es: " << minimo << endl;
    cout << "Se encuentra en la posicion: " << endl;

    /// Buscar los elementos iguales al mínimo. Mostrar posición.
    for(i=0; i<TAM; i++){
        if (lista[i] == minimo){
            cout << (i+1) << endl;
        }
    }

    return 0;
}
