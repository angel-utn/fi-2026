/*
  Se dispone de una lista de numeros enteros que finaliza cuando
  se ingresa un 0. Se pide calcular e informar el porcentaje
  de numeros positivos y el porcentaje de numeros negativos.
*/
#include <iostream>
using namespace std;

int main(){

  int n, cantNegativos=0, cantPositivos=0, cantNumeros=0;
  float porcNegativos, porcPositivos;

  cout << "Numero: ";
  cin >> n;

  while(n != 0){

    if (n > 0){
      cantPositivos++;
    }
    else if (n < 0){
      cantNegativos++;
    }
    cantNumeros++;

    cout << "Numero: ";
    cin >> n;
  }

  if (cantNumeros > 0){
    porcPositivos = cantPositivos*100.0 / cantNumeros;
    porcNegativos = cantNegativos*100.0 / cantNumeros;

    cout << "Estadisticas" << endl;
    cout << "% Positivos: " << porcPositivos << endl;
    cout << "% Negativos: " << porcNegativos << endl;
  }
  else{
    cout << "Tenes que ingresar al menos un numero para los calculos" << endl;
  }



  return 0;
}
