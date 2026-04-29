///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int n1, n2, n3, n4, n5, cantPos=0;
    cout<<"INGRESAR NUMERO ";
    cin>>n1;
    cout<<"INGRESAR NUMERO ";
    cin>>n2;
    cout<<"INGRESAR NUMERO ";
    cin>>n3;
    cout<<"INGRESAR NUMERO ";
    cin>>n4;
    cout<<"INGRESAR NUMERO ";
    cin>>n5;
    if(n1>0){
        cantPos=cantPos+1;
    }

    if(n2>0){
        cantPos=cantPos+1;
    }


    if(n3>0){
        cantPos=cantPos+1;
    }


    if(n4>0){
       cantPos=cantPos+1;
    }


    if(n5>0){
        cantPos=cantPos+1;
    }

    cout<<"LA CANTIDAD DE POSITIVOS ES "<<cantPos<<endl;
	system("pause");
	return 0;
}
