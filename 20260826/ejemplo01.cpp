#include <iostream>
using namespace std;

int main(){
  const int CANT = 5;
  int notas[CANT]; // Indexación base-0 ... 0 es el primer elemento
  int i, notaMaxima;

  for(i = 0; i < CANT; i++){
    cout << "Ingresar nota: ";
    cin >> notas[i];
  }

  cout << endl << " ------------------------------ " << endl;

  notaMaxima = notas[0];

  for (i = 1; i < CANT; i++){
    if (notas[i] > notaMaxima){
      notaMaxima = notas[i];
    }
  }

  cout << "La nota máxima es: " << notaMaxima << endl;

  /*
    Calcular:
    - La nota mínima
    - La cantidad de examenes aprobados (nota >= 6)
    - Cuántos exámenes tienen la nota máxima
  */








  return 0;
}
