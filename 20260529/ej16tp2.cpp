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
        n1=1;
    }
    else{
        n1=0;
    }
    if(n2>0){
        n2=1;
    }
    else{
        n2=0;
    }
    if(n3>0){
        n3=1;
    }
    else{
        n3=0;
    }
    if(n4>0){
        n4=1;
    }
    else{
        n4=0;
    }
    if(n5>0){
        n5=1;
    }
    else{
        n5=0;
    }
    cantPos=n1+n2+n3+n4+n5;
    cout<<"LA CANTIDAD DE POSITIVOS ES "<<cantPos<<endl;
	system("pause");
	return 0;
}
