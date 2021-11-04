#include<iostream>
#include<conio.h>
using namespace std;
int suman(int);

int main(){
  int nume1;
  do{
    cout<<"Digite el numero de elementos:";
    cin>>nume1;
  }while(nume#1 <= 0);

  cout<<"\nLa suma es: "<<suman(nume1);
  getch();
  return 0;
}

int suman(int n){
  int suma = 0;
  if(n == 1){
    suma = 1;
  }
  else{
    suma = n + suman(n-1);
  }
  return suma;
}
