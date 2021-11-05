#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void ordernarDatos(int *,int);
void mostrarDatos(int *,int);
int numdatos,*elemArray;
int main(){
  pedirDatos();
  ordernarDatos(elemArray,numdatos);
  mostrarDatos(elemArray,numdatos);
  delete[] elemArray;
  getch();
  return 0;
}

void pedirDatos(){
  cout<<"Ingresa el numero de elementos: ";
  cin>>numdatos;
  // creacion de array
  elemArray = new int[numdatos];
  for(int i = 0;i<numdatos;i++){
    cout<<"["<<i<<"]"<<endl;
    cin>>*(elemArray+i);
  }
}

void ordenarDatos(int *elemArray,int numdatos){
  int aux;
  for(int i = 0;i<numdatos;i++){
    for(int j = 0;j<numdatos-1;i++){
      if(*(elemArray+j)>*(elemArray+j+1)){
        aux = *(elemArray+i);
        *(elemArray+j) = *(elemArray+j+1);
        *(elemArray+j+1) = aux;
      }
    }
  }
}
void mostrarDatos(int *elemArray,int numdatos){
  cout<<"\nMostrando datos..";
  for(int i = 0;i<numdatos;i++){
    cout<<*(elemArray+i);
  }
}
