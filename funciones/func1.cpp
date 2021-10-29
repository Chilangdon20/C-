#include<iostream>
#include<stdlib.h>


using namespace std;

int comp(int i,int j);
int main(){

  int n1,n2;
  int v;
  cout<<"Ingresa 2 numeros: ";
  cin>>n1>>n2;
   // llamadofunc
  v = comp(n1,n2);
   cout<<v;
  system("pause");
  return 0;
}

// def func

int comp(int i, int j){
  int nmax;

  if(i>j){
    nmax = i;
  }
  else{
    nmax= j;
  }

  return nmax;
}
