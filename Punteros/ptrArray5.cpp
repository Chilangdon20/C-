#include<iostream>
#include<conio.h>
using namespace std;

int main(){
  int array[10],*ptr;

  for(int i = 0;i<10;i++){
    cout<<"Elementos de array: ";
    cin>>array[i];
  }

  ptr = array;

  for(int i = 0;i<10;i++){
    if(*ptr%2==0){
      cout<<*ptr<<" es par- direccion de memoria: "<<ptr<<endl;
    }
    ptr++;
  }

  getch();
  return 0;
}
