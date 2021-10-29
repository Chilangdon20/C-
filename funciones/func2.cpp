// plantillas de funcion
#include<iostream>
#include<stdlib.h>


using namespace std;
// prototipo de funcion
template<class TIPOD>
void ABS(TIPOD n);
int main(){
  int i = -3;
  float j = -1.543;

  ABS(i);
  ABS(j);

  system("pause");
  return 0;
}
template<class TIPOD>
void ABS(TIPOD n){
  if(n<0){
    n = n*-1;
  }
  cout<<"ABS: "<<n<<endl;
}
