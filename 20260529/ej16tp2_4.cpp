///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int n1,cantPos=0;
    int i;
    ///for(i=10;///valor inicial
    ///i<=5;///condición que se analiza para ver si el ciclo continua
    ///i=i+1)///incremento
    for(i=1;i<=5;i++){
        cout<<"INGRESAR NUMERO ";
        cin>>n1;
        if(n1>0){
            cantPos=cantPos+1;///cantPos++///cantPos+=1
        }
    }

    cout<<"LA CANTIDAD DE POSITIVOS ES "<<cantPos<<endl;
	system("pause");
	return 0;
}
