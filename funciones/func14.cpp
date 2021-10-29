#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();

int cambiosigno(int a[],int);
void mostrar(int[],int);
int a[100],tam;

int main() {
  pedirDatos();
  cambiosigno(a,tam);
  mostrar(a,tam);

  system("pause");
  return 0;
}

void pedirDatos(){
  cout<<"Ingrese el numero de elementos del array: "<<endl;
  cin>>tam;
  for(int i = 0;i<tam;i++){
    cout<<i+1<<"Ingresa un numero: ",
    cin>>a[i];
  }
}

int cambiosigno(int a[], int tam){
  for(int i = 0;i<tam;i++){
    a[i] *=-1;
  }

}

void mostrar(int a[], int tam){
  cout<<"Mostrando nuevo array: ";
  for(int i = 0;i<tam;i++){
    cout<<a[i]<<" ";
  }
}
