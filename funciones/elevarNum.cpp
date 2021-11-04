#include<iostream>
#include<conio.h>
using namespace std;

int elevacion(int,int);

int main(){
  int base, exponente;
  cout<<"Base: ";cin>>base;
  cout<<"exponente: ";cin>>exponente;
  cout<<"Resultado: "<<elevacion(base,exponente);
  getch();
  return 0;
}
int elevacion(int x,int y){
  if(y == 1){
    return x;
  }
  else{
    return x*elevacion(x,y-1);
  }
}
