#include<iostream>
#include<stdlib.h>

using namespace std;

template <class D>
D maximo(D v1, D v2, D v3);

int main(){
  char v1 = 'a', v2 = 'b', v3 ='c';
  cout<<maximo(v1,v2,v3);
  system("pause");
  return 0;
}
template< class D>
D maximo(D v1,D v2,D v3){
  D almacenador;

  if((v1>=v2) && (v1>=v3)){
    almacenador = v1;
  }
  if((v2>=v1) && (v2>=v3)){
    almacenador = v2;
  }
  else{
    almacenador = v3;
  }

  return almacenador;
}
