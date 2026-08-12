#include <iostream>
using namespace std;

int main(){
  const int TAM = 5;
  int edades[TAM], i, suma = 0, cant = 0;
  float promedio;

  cout << "Ingresar las edades de los estudiantes: " << endl;
  for (i=0; i<TAM; i++){
    cin >> edades[i];
   // suma += edades[i];
  }

  for(i=0; i<TAM; i++){
    suma += edades[i];
  }

  promedio = (float) suma / TAM;

  for(i=0; i<TAM; i++){
    if (edades[i] > promedio){
        cant++;
    }
  }

  cout << "El promedio de edad es: " << promedio << endl;
  cout << "La cantidad de personas con edades mayores al promedio de edad: " << cant << endl;







   return 0;
}
