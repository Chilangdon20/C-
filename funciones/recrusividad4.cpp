#include<iostream>
#include<conio.h>
using namespace std;
int escribeNum(int,int);
int main(){
  int i,f;
  cout<<"Inicio: ";cin>>i;
  cout<<"Fin: ";cin>>f;
  for(int j=i;j<f;j++){
  cout<<escribeNum(i,f);
  }
  getch();
  return 0;
}
int escribeNum(int ini,int fin){
  if(ini==fin){
    return ini;
  }
  else{
    return escribeNum(ini,fin-1);
  }
}
