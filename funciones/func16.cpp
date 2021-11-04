#include<iostream>
#include<conio.h>

using namespace std;

void ingresa();
void matrixSimetrica(int a[][100],int,int);

int a[100][100], nf,ncol;

int main(){
  ingresa();
  matrixSimetrica(a,nf,ncol);
  getch();
  return 0;
}

void ingresa(){
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

void matrixSimetrica(int a[][100],int nf,int ncol){
  int cont = 0;
  if(nf == ncol){
  for(int i = 0;i<nf;i++){
    for(int j = 0;j<ncol;j++){
        if(a[i][j] == a[j][i]){
          cont++;
        }
     }
    }
  }
  if(cont = nf*ncol){
    cout<<"La matriz es simetrica";
  }
  else{
    cout<<"La matriz no es simetrica";
  }
}
