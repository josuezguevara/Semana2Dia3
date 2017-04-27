#include <iostream>
using namespace std;


/*la funcion muestra el menu y valida entrada que sea un valor correcto
retorna la opcion elgida por el usuario*/

int menu();
int factorial(int);

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
   case 3:{
   int num;
   cout<<"Ingrese el numero: ";
   cin>>num;
   cout<<"El factorial de "<<num<<" es:"
   <<factorial(num)<<endl;
   break;
   case 4:
    salir=true;
   break;
  }
 }
} 
 return 0;
 
}
int factorial(int i){
 if (i<0)//validar input
  return -1;
 else if (i=0){//fondo de la recursion
  return 1;
 } else {
  return i* factorial(i-1);
 }
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
