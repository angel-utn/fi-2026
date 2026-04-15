#include <iostream>
using namespace std;

int main(){
    char nivelUrgencia;

    cout << "Ingrese el nivel de urgencia (S, P, I): ";
    cin >> nivelUrgencia;

    switch (nivelUrgencia){
        case 'S':
        case 's':
        case '1':
            cout << "Sin urgencia." << endl;
            cout << "0% de recargo." << endl;
        break;

        case 'P':
        case 'p':
        case '2':
            cout << "Pronto (en la semana)" << endl;
            cout << "20% de recargo." << endl;
        break;

        case 'I':
        case 'i':
        case '3':
            cout << "Inmediatamente (hoy)" << endl;
            cout << "50% de recargo" << endl;
        break;

        default:
            cout << "Tipo de urgencia incorrecta." << endl;
            cout << "$5000 por las molestias." << endl;
        break;
    }

    return 0;
}
