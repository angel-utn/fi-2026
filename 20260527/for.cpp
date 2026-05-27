/*
  Se dispone de una lista de 5 números enteros que se
  ingresan por teclado. Calcular e informar el porcentaje de
  números positivos y el porcentaje de números negativos.
*/
#include <iostream>
using namespace std;

int main(){
  const int CANT = 5;
  int i, n, cantNegativos=0, cantPositivos=0;
  float porcNegativos, porcPositivos;

  for(i=1; i<=CANT; i++){
    cout << "Número: ";
    cin >> n;

    if (n > 0){
      cantPositivos++;
    }
    else if (n < 0){
      cantNegativos++;
    }
  }

  porcPositivos = cantPositivos*100.0 / CANT;
  porcNegativos = cantNegativos*100.0 / CANT;

  cout << "Estadisticas" << endl;
  cout << "% Positivos: " << porcPositivos << endl;
  cout << "% Negativos: " << porcNegativos << endl;

  return 0;
}
