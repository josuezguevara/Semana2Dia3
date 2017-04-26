#include <iostream>
using namespace std;


/*la funcion muestra el menu y valida entrada que sea un valor correcto
retorna la opcion elgida por el usuario*/

int menu();

int main() {
 bool salir=false;
 while(!salir){
  switch ( menu() ){
   case 1:{
    int n1,n2;
    cout<<"Escriba un numero: ";
    cin>>n1;
    cout<<"Escriba otro numero: ";
    cin>>n2;
    cout<<"El resultado es: "<<n1 * n2<<endl;

    break;
  }
   case 2:{
    int n1,n2;
    cout<<"Escriba un numero: ";
    cin>>n1;
    cout<<"Escriba otro numero: ";
    cin>>n2;
    cout<<"El resultado es: "<<n1 + n2<<endl;    
    break;
   }
   case 3:
   break;
   case 4:
    salir=true;
   break;
  }
 }
 return 0;
}

int menu(){
 int opcion;
 bool valido=true;
 do{
  cout<<"     Menu" <<endl
   <<"1.- Multiplicar dos numeros"<<endl
   <<"2.- Sumar dos numeros"<<endl
   <<"3.- Calcular Factorial!"<<endl
   <<"4.- Salir"<<endl;
  cout<<"Ingrese una opcion: ";
  cin>>opcion;
  if (opcion >0 && opcion <5)
   valido=true;
  else{
   cout<<"Opcion no valida, intente de nuevo... "<<endl;
  }

 }while(!valido);
 return opcion;
}
