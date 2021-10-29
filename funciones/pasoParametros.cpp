#include<iostream>
#include<stdlib.h>

using namespace std;

void vectorCuadrado(int a[],int);
void imprimir( int a[],int);
int main(){
  const int TAM = 3;
  int a[TAM] = {1,2,3};
  vectorCuadrado(a,TAM);
  imprimir(a,TAM);
  system("pause");
  return 0;
}

void imprimir(int a[],int tam){
  for (int i = 0; i < tam; i++) {
    cout<<a[i]<<" ";
  }
}

void vectorCuadrado(int a[],int tam){
  for(int i =0;i<tam;i++){
    a[i] *= a[i];
  }
}
