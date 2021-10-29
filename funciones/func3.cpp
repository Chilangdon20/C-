#include<iostream>
#include<stdlib.h>


using namespace std;
void entrada();
void mult(float x,float y);

float n1,n2;

int main(){

  entrada();
  mult(n1,n2);

  system("pause");
  return 0;
}

void entrada(){
  cout<<"Input: ";
  cin>>n1>>n2;
}

void mult(float x,float y){
   float n = x * y;
   cout<<"mul: "<<n;

}
