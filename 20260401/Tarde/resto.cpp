///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;

int main(){
    int cantidad,sueltos, cajas, importe;
    cout<<"INGRESAR UNA CANTIDAD (ENTERA) ";
    cin>>cantidad;
    sueltos=cantidad%12;
    cajas=cantidad/12;
    importe=sueltos*100+cajas*1000;
    cout<<"EL IMPORTE ES "<<importe<<endl;
	system("pause");
	return 0;

}
