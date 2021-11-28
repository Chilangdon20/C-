#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void Transpuesta(int **,int,int);
int **punteroMatriz,nFilas,nCol;

int main(){
  pedirDatos();
  Transpuesta(punteroMatriz,nFilas,nCol);

  for(int i = 0;i<nFilas;i++){
    delete[] punteroMatriz[i];
  }
  delete[] punteroMatriz;
  getch();
  return 0;
}

void pedirDatos(){

  cout<<"Filas: ";
  cin>>nFilas;
  cout<<"Columnas";
  cin>>nCol;

  punteroMatriz = new int*[nFilas];

  for(int i = 0;i<nFilas;i++){
    punteroMatriz[i] = new int[nCol];
  }

  for(int i = 0;i<nFilas;i++){
    for(int j =0;j<nCol;j++){
      cout<<"\nMatriz: ["<<i<<"]"<<"["<<j<<"]";
      cin>>*(*(punteroMatriz+i)+j);
    }
  }
}

void Transpuesta(int **punteroMatriz,int nFilas, int nCol){

  cout<<"Matriz Original"<<endl;
  for(int i =0;i<nFilas;i++){
    for(int j = 0;j<nCol;j++){
      cout<<*(*(punteroMatriz+i)+j);
    }
    cout<<"\n";
  }
  cout<<"Matriz Transpuesta:"<<endl;
  for(int i =0;i<nFilas;i++){
    for(int j =0;j<nCol;j++){
      cout<<*(*(punteroMatriz+j)+i);
    }
    cout<<"\n";
  }
}
