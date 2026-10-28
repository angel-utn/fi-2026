#include <iostream>
using namespace std;

int main(){
    const int FILAS = 3;
    const int COLUMNAS = 5;
    int listaNumeros[FILAS][COLUMNAS] = {
                                {1, 2, 3, 4, 5},
                                {10, 20, 30, 40, 50},
                                {11, 22, 33, 44, 55}
    };

    int i,j;
    cout << "Matriz completa" << endl;
    for(i=0; i<FILAS; i++){
        for(j=0; j<COLUMNAS; j++){
            cout << listaNumeros[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Segunda fila de la matriz" << endl;
    for(j=0; j<COLUMNAS; j++){
        cout << listaNumeros[1][j] << "\t";
    }

    cout << endl << "Tercer columna de la matriz" << endl;
    for(j=0; j<FILAS; j++){
        cout << listaNumeros[j][2] << "\t";
    }

    cout << endl << endl << "Primer elemento de la matriz (Fila1, Col1): ";
    cout << listaNumeros[0][0] << endl;

    cout << endl << "Último elemento de la matriz (Fila3, Col5): ";
    cout << listaNumeros[FILAS-1][COLUMNAS-1] << endl; // listaNumeros[2][4];

    return 0;
}
