#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
int calcSum(int a[], int);

int a[100],tam;

int main() {
  pedirDatos();

  cout<<calcSum(a,tam)<<endl;
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

int calcSum(int a[], int tam){
  int suma = 0;
  for(int i = 0;i<tam;i++){
    suma += a[i];
  }
  return suma;
}
