#include<iostream>
#include<conio.h>
using namespace std;

struct numComplejo{
  float real,imaginario;
}z1,z2;

void pedirDatos();
numComplejo resultado(numComplejo,numComplejo);
void msotrar(numComplejo);
int main(){
  pedirDatos();
  numComplejo r = resultado(z1,z2);
  resultado(z1,z2);
  msotrar(r);
  getch();
  return 0;
}

void pedirDatos(){
    cout<<"Parte real z1: ";cin>>z1.real;
    cout<<"Parte compleja z1: ";cin>>z1.imaginario;
    cout<<"Parte real z2: ";cin>>z2.real;
    cout<<"Parte compleja: ";cin>>z2.imaginario;

}

numComplejo resultado(numComplejo z1,numComplejo z2){
  z1.real+=z2.real;
  z1.imaginario+=z2.imaginario;
  return z1;
}

void msotrar(numComplejo n){
  cout<<"\nResultado: "<<n.real<<", "<<n.imaginario<<endl;
}
