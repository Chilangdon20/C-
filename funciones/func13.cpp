#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void ordenado(int a[], int);

int a[100],tam;

int main() {
  pedirDatos();
  ordenado(a,tam);
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

void ordenado(int a[], int tam){
  char b = 'F';
  int i = 0;
  while ((b == 'F') && (i<tam-1)) {
    if(a[i]>a[i+1]){
      b = 'V';
    }
    i++;
  }
  if(b == 'V'){
    cout<<"ordenado";
  }
  else{
    cout<<"no ordenado";
  }
}
