#include<iostream>
#include<conio.h>
using namespace std;

int main(){
  int a[]={1,2,3,4,5};
  int *ptr;
  ptr = a;
  for(int i =0;i<5;i++){
    cout<<"Elemento: "<<a[i]<<" direccion de memoria: "<<ptr++<<endl;
  }
  getch();
  return 0;
}
