#include<iostream>
#include<conio.h>
using namespace std;

int main(){
  int n,*ptr;
  cout<<"Numero: ";
  cin>>n;
  ptr=&n;
  if(*ptr%2==0){
    cout<<"El numero es par: "<<endl;

  }else{
    cout<<"El numero es impar"<<endl;
  }
  cout<<"Direccion de memoria: "<<ptr;
  getch();
  return 0;
}
