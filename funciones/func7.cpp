#include<iostream>
#include<stdlib.h>

using namespace std;

template<class dato>
void plantilla(dato D);

int  main(){
  int n = 20;
  char name = 'fer';
  plantilla(n);
  plantilla(name);
  system("pause");
  return 0;
}

template<class dato>
void plantilla(dato D){

  cout<<D;
}
