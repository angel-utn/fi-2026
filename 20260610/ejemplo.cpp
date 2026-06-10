#include <iostream>
using namespace std;

int main(){
  int i, k, numeroMaquina, cantidad, tiempo;
  int totalPiezas;

  for(k=1; k<=3; k++){
    totalPiezas = 0;

    for(i=1; i<=5; i++){
      cout << "Número de maquina: ";
      cin >> numeroMaquina;

      cout << "Cantidad de piezas: ";
      cin >> cantidad;

      cout << "Tiempo: ";
      cin >> tiempo;

      totalPiezas += cantidad;
    }
    cout << endl;
    cout << "Número de máquina: " << numeroMaquina << endl;
    cout << "Total de piezas: " << totalPiezas << endl;
  }
  return 0;
}
