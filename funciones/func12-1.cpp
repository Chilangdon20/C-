#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
int calcSuma(int vec[],int);

int vec[100],tam;

int main(){
  pedirDatos();
  cout<<"la suma es: "<<calcSuma(vec,tam);
  getch();
  return 0;

}

void pedirDatos(){
  cout<<"input: ";
  cin>>tam;
  for(int i = 0;i<tam;i++){
    cout<<i+1<<" Ingresa un numero: ";
    cin>>vec[i];
  }
}
int calcSuma(int vec[],int tam){
  int suma;
  for(int i = 0;i<tam;i++){
    suma += vec[i];
  }
  return suma;
}
