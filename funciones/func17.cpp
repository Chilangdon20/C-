#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
int menorElemento(int a[][100],int,int);

int a[100][100], nf, ncol;

int main(){
  pedirDatos();
  cout<<"ele menor elementoes; "<<menorElemento(a,nf,ncol);
  getch();
  return 0;
}

void pedirDatos(){
  cout<<"Ingresa el numero de filas:";
  cin>>nf;
  cout<<"Ingresa num columnas: ";
  cin>>ncol;
  for(int i =0;i<nf;i++){
    for(int j = 0;j<ncol;j++){
      cout<<"ingresa un numero: ["<<i<<"]["<<j<<"]: ";
      cin>>a[i][j];
    }
  }
}

int menorElemento(int a[][100],int nf,int ncol){
  int fila,menor=999999;

  cout<<"Ingresa un numero de fila para comprobar: ";
  cin>>fila;

  for(int i=0;i<nf;i++){
    for(int j = 0;j<ncol;j++){
      if(fila==i){
        if(a[i][j]<menor){
          menor = a[i][j];
        }
      }
    }
  }
  return menor;
}
