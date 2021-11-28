#include<iostream>
#include<conio.h>
using namespace std;
struct Persona{
  char name[30];
  int edad;
}p1,*ptrPersona=&p1;

void pedirDatos();
void mostrarDatos(Persona *);
int main(){
  pedirDatos();
  mostrarDatos(ptrPersona);
  getch();
  return 0;
}

void pedirDatos(){
  cout<<"Nombre; ";
  cin.getline(ptrPersona->name,30,'\n');

  cout<<"Edad: ";
  cin>>ptrPersona->edad;
}

void mostrarDatos(Persona *ptrPersona){
   cout<<"Nombre: "<<ptrPersona->name<<endl;
   cout<<"Edad: "<<ptrPersona->edad<<endl;
}
