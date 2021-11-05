#include<iostream>
#include<conio.h>
using namespace std;

int main(){
  int n,*ptr,cont = 0;
  cout<<"Numero: ";cin>>n;
  ptr = &n;
  for(int i = 1;i<*ptr;i++){
    if(*ptr%i==0){
      cont++;
    }
  }
  if(cont>2){cout<<"Numero no primo"<<ptr;}
  else{cout<<"Numero primo:"<<*ptr<<"\ndireccion memoria: "<<ptr;}

  getch();
  return 0;
}
