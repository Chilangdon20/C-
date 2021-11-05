#include<iostream>
#include<conio.h>
using namespace std;

int main(){
  int n=20,*ptr;
  ptr = &n;
  cout<<*ptr<<endl;
  cout<<ptr;
  getch();
  return 0;
}
