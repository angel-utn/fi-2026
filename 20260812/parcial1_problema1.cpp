/*
    1) Hacer un programa que solicite por teclado dos números enteros, correspondientes al
stock de un producto en dos sucursales de un comercio. Luego, el programa debe mostrar
por pantalla el mensaje "Reponer stock" si al menos una de las dos sucursales tiene 10
unidades o menos.
Ejemplos:
Sucursal 1 = 8 unidades, Sucursal 2 = 25 unidades → "Reponer stock"
Sucursal 1 = 30 unidades, Sucursal 2 = 5 unidades → "Reponer stock"
Sucursal 1 = 10 unidades, Sucursal 2 = 15 unidades → "Reponer stock"
Sucursal 1 = 20 unidades, Sucursal 2 = 40 unidades → no muestra nada
*/

#include <iostream>
using namespace std;

int main(){
    int stock1, stock2;

    cout << "Ingresar el stock de la sucursal 1: ";
    cin >> stock1;

    cout << "Ingresar el stock de la sucursal 2: ";
    cin >> stock2;

    if (stock1 <= 10 || stock2 <= 10){
        cout << "Reponer stock";
    }

    return 0;
}
