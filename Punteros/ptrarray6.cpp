#include<iostream>
#include<conio.h>
using namespace std;

int main(){
  int tam,a[100],*ptr,min;
  cout<<"Size of the array: ";
  cin>>tam;
  for(int i=0;i<tam;i++){
    cout<<"["<<i<<"]";
    cin>>a[i];
  }
  ptr = a;
  for(int i =0;i<tam;i++){
    if(*ptr<min){
      min = *ptr;
    }
    ptr++;
  }
  cout<<"\nThe lowest element is: "<<min;
  getch();
  return 0;
}
