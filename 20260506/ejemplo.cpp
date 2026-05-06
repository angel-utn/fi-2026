/*
  Hacer un programa para ingresar la edad y la altura de 10 personas.
Luego se pide determinar e informar:
a) La edad promedio de las personas con altura entre 1.60 mts. y 1.80 mts. inclusive.
*/
#include <iostream>
using namespace std;

int main(){

  int edad, i;
  float altura, promedio;

  int cantEntre160y180 = 0;
  int sumaEdadEntre160y180 = 0;

  for(i=1; i<=10; i++){
    cout << "Edad: ";
    cin >> edad;

    cout << "Altura: ";
    cin >> altura;
    cout << endl;

    if (altura >= 1.6 && altura <= 1.8){
      cantEntre160y180++;
      sumaEdadEntre160y180 += edad;
    }

  }

  if (cantEntre160y180 > 0){
    promedio = (float) sumaEdadEntre160y180 / cantEntre160y180;
    cout << "El promedio es: " << promedio << endl;
  }
  else{
    cout << "No hay personas con ese rango de altura." << endl;
  }

    return 0;
}
