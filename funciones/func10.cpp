#include<iostream>
#include<stdlib.h>

using namespace std;

void tiempo(int, int&,int&,int&);

int main(){
  int totalSeg,hrs,min,seg;
  cout<<"Ingresa el numero de segundos: "<<endl;
  cin>>totalSeg;
  tiempo(totalSeg,hrs,min,seg);
  cout<<hrs<<endl;
  cout<<min<<endl;
  cout<<seg<<endl;

  system("pause");
  return 0;
}


void tiempo(int totalSeg,int& horas,int& min,int& seg){
  horas = totalSeg/3600;
  totalSeg %= 3600;
  min = totalSeg/60;
  seg = totalSeg%60;




}
