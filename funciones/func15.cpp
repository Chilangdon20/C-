#include<iostream>
#include<stdlib.h>
using namespace std;
void pedirDatos();
void impares(int a[], int);
int a[100],tam;

int main() {
  pedirDatos();
  impares(a,tam);
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

void impares(int a[], int tam){
  int vecimpares[100];
  int j = 0;

  for(int i = 0;i<tam;i++){
    if(a[i]%2!=0){
      vecimpares[i] = a[i];
      j++;
    }
  }
  for(int i  = 0;i<j;i++){
    cout<<vecimpares[i]<<" ";
  }
}
