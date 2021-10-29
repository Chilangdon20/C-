#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
void entrada();
void funpot(int n1, int n2);
int n1,n2;
int main(){
  entrada();
  funpot(n1,n2);
  getch();
  system("pause");
  return 0;
}
void entrada(){
  cout<<"Ingresa numero: "<<endl;
  cin>>n1;
  cout<<"Ingresa potencia: "<<endl;
  cin>>n2;
}
void funpot(int x,int y){
  long r = 1;
  for(int i = 1;i<=y;i++){
    r *= x;
  }
  cout<<"ans: "<<r<<endl;
}
