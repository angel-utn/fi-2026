#include <iostream>
using namespace std;

int main(){
    const int FIL = 3;
    const int COL = 5;
    int listaNumeros[FIL][COL] = {
                                    {1, 2, 3, 4, 5},
                                    {10, 20, 30, 40, 50},
                                    {11, 22, 33, 44, 55}
                                 };
    int i, j;

    for (j=0; j<FIL; j++){
        for (i=0; i<COL; i++){
          cout << listaNumeros[j][i] << "\t";
        }
        cout << endl;
    }

    cout << "Primer elemento (0, 0): " << listaNumeros[0][0] << endl;
    cout << "Ultimo elemento       : " << listaNumeros[2][4] << endl;

    return 0;
}
