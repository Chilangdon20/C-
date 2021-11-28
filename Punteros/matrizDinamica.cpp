#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void mostrarDatos(int **,int,int);
void sumarDatos(int **,int **,int,int);
// puntero de puntero
int **punteroMatriz,**punteroMatriz2,nFilas,nCol;

int main(){
  pedirDatos();
  sumarDatos(punteroMatriz,punteroMatriz2,nFilas,nCol);
  mostrarDatos(punteroMatriz,nFilas,nCol);

  for(int i = 0;i<nFilas;i++){
    delete[] punteroMatriz2[i];
  }
  // liberando memoria fila
  delete[] punteroMatriz2;
  // liberando memoria columna
  for(int i = 0;i<nFilas;i++){
    delete[] punteroMatriz[i];
  }
  // liberando memoria fila
  delete[] punteroMatriz;


  getch();
  return 0;
}

void pedirDatos(){
  cout<<"Filas: ";
  cin>>nFilas;
  cout<<"Columnas: ";
  cin>>nCol;
  // reservar memoria para las filas
  punteroMatriz = new int*[nFilas];

  for (int i = 0; i < nFilas; i++) {
    // reservar memoria para las columnas
    punteroMatriz[i] = new int[nCol];

  }
  cout<<"Elementos del array 1:";
  for(int i =0;i<nFilas;i++){
    for(int j =0;j<nCol;j++){
      cout<<"\nMatriz 1: ["<<i<<"]"<<"["<<j<<"]: ";
      cin>>*(*(punteroMatriz+i)+j);
    }
  }

  punteroMatriz2 = new int*[nFilas];
  for (int i = 0; i < nFilas; i++) {
    // reservar memoria para las columnas
    punteroMatriz2[i] = new int[nCol];

  }
  cout<<"Elementos del array 2: ";
  for(int i =0;i<nFilas;i++){
    for(int j =0;j<nCol;j++){
      cout<<"\nMatriz 2: ["<<i<<"]"<<"["<<j<<"]: ";
      cin>>*(*(punteroMatriz2+i)+j);
    }
  }

}

void sumarDatos(int **punteroMatriz,int **punteroMatriz2,int nFilas,int nCol){
  for (int i = 0; i < nFilas; i++) {
    for (int j = 0; j < nCol; j++) {
      *(*(punteroMatriz+i)+j) += *(*(punteroMatriz2+i)+j);
    }
  }
}

void mostrarDatos(int **punteroMatriz,int nFilas, int nCol){
  cout<<"\n\nSuma: : ";
  for(int i =0;i<nFilas;i++){
    for(int j =0;j<nCol;j++){
      cout<<*(*(punteroMatriz+i)+j)<<" ";
    }
    cout<<"\n";
  }
}
