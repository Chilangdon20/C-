#include<iostream>
#include<conio.h>
using namespace std;

int fibonacci(int);
int main(){
  int nelem;
  do{
    cout<<"Ingrese el numero de elementos: ";
    cin>>nelem;
  }while(nelem<=0);

  for(int i = 0;i<nelem;i++){
    cout<<fibonacci(i)<<" , ";
  }
  getch();
  return 0;
}

int fibonacci(int n){
  if(n<2){
    return n;
  }
  else{
    return fibonacci(n-1)+fibonacci(n-2);
  }

}
