#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
void inpput();
float resto(float v);

float num;

int main(){

  inpput();
  cout<< resto(num);
  getch();
  system("pause");
  return 0;
}

void inpput(){
  cout<<"input: "<<endl;
  cin>>num;
}

float resto(float v){
  int ptent = v;
  float ptedec = v - ptent;
  return ptedec;
}
