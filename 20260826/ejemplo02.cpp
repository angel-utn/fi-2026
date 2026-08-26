/**
  Un kiosco dispone de los registros de ventas del mes de Julio.
  Cada venta registra:
  - Nro Ticket
  - Día
  - Importe de la venta

  No se sabe la cantidad de ventas realizadas. Para indicar el fin de la carga
  de datos se ingresa un nro de ticket igual a cero.

  Se desea un programa que informe:
  - La recaudación de cada uno de los días del mes.

  Agregar:
  - La recaudación mensual
  - La cantidad de días que no hubo ventas (recaudación del día en cero)
  - La cantidad de ventas de cada día

*/

#include <iostream>
using namespace std;

int main(){
  float importe, recaudacion[31] = {};
  int nroTicket, dia, i;

  cout << "Numero de ticket: #";
  cin >> nroTicket;

  while (nroTicket != 0){
    cout << "Día: ";
    cin >> dia;

    cout << "Importe: $";
    cin >> importe;

    cout << "--------------------------" << endl;
    recaudacion[dia-1] += importe;

    cout << "Numero de ticket: #";
    cin >> nroTicket;
  }

  cout << endl;

  cout << "Recaudación del mes" << endl;

  for(i = 0; i < 31; i++){
    if (recaudacion[i] > 0){
      cout << "Día " << (i+1) << ": " << recaudacion[i] << endl;
    }
  }

  return 0;
}
