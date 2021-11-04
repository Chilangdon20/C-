#include<iostream>
#include<conio.h>

using namespace std;

// parametros
void mostrarArray(int m[][3],int,int);
void mostrarelevada(int m[][3],int,int);
void elevarNum(int m[][3],int,int);
int main(){
  const int nf = 2;
  const int ncol =3;
  int m[nf][ncol] = {{1,2,3},{4,5,6}};
  mostrarArray(m,nf,ncol);
  elevarNum(m,nf,ncol);
  mostrarelevada(m,nf,ncol);
  getch();
  return 0;
}

void mostrarArray(int m[][3],int nf,int ncol){
  cout<<"Mostrando matriz: \n";
  for(int i = 0;i<nf;i++){
    for(int j = 0;j<ncol;j++){
      cout<<m[i][j]<<" ";
    }
    cout<<"\n";
  }
}

void mostrarelevada(int m[][3],int nf,int ncol){
  cout<<"mostrando matriz elevada: \n";
  for(int i  = 0;i<nf;i++){
    for(int j =0;j<ncol;j++){
      cout<<m[i][j]<<" ";
    }
    cout<<"\n";
  }
}
void elevarNum(int m[][3],int nf,int ncol){

  for(int i  =0;i<nf;i++){
    for(int j = 0;j<ncol;j++){
      m[i][j] *= m[i][j];
    }
  }

}
