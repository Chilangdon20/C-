#include<iostream>
#include<conio.h>
using namespace std;

void intercambio(float *,float *);

int main(){
  float n1=20.8,n2=6.78;

  cout<<"primer numero "<<n1<<endl;
  cout<<"segundo numero: "<<n2<<endl;
  intercambio(&n1,&n2);
  getch();
  return 0;
}

void itnercambio(float *dirn1,float *dirn2){
  float aux;
  aux = *dirn1;
  *dirn1 = *dirn2;
  *dirn2 = aux;
}
