/*
Paso por referencia: pasar el lugar de la memoria donde se almacena la variable

*/

#include<iostream>
#include<stdlib.h>

using namespace std;

void intercambio(int&,int&);

int main(){
  int n1 = 2, n2 = 3;

  cout<<n1<<endl;
  cout<<n2<<endl;

  intercambio(n1,n2);

  cout<<n1<<endl;
  cout<<n2<<endl;


  system("pause");
  return 0;
}

void intercambio(int& n1, int& n2){
  int aux;
  aux = n1;
  n1 = n2;
  n2 = aux;
}
