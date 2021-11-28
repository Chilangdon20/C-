#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void OrdArray(int *,int);
void mostrarDatos(int *,int);

int nEle,*elemento;

int main(){
  pedirDatos();
  OrdArray(elemento,nEle);
  mostrarDatos(elemento,nEle);

  delete[] elemento;
  getch();
  return 0;
}

void pedirDatos(){
  cout<<"Ingresa el tamanio del array: ";
  cin>>nEle;

  elemento = new int[nEle];
  for(int i = 0;i<nEle;i++){
    cout<<"Datos: "<<"["<<i<<"]"<<endl;
    cin>>*(elemento+i);
  }
}

void OrdArray(int *elemento,int nEle){
  int aux;

  for (int i = 0; i < nEle; i++) {
    for (int j = 0; j <nEle-1; j++) {
      if(*(elemento+j)>*(elemento+j+1)){
        aux = *(elemento+j);
        *(elemento+j) = *(elemento+j+1);
        *(elemento+j+1) = aux;
      }
    }
  }
}

void mostrarDatos(int *elemento,int nEle){
  cout<<"\n\nMostrando array: ";
  for (int i = 0; i <nEle; i++) {
    cout<<*(elemento+i)<<"|"<<endl;
  }
}
