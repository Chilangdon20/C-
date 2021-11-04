#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
  char name[20];
  int edad;
}p1;

int main(){

  cout<<"Nombre1: ";
  cin.getline(p1.name,20,'\n');
  cout<<"Age: ";
  cin>>p1.edad;
  cout<<"\n printing data...\n";
  cout<<"name: "<<p1.name<<endl;
  cout<<"age: "<<p1.edad<<endl;
  getch();
  return 0;
}
