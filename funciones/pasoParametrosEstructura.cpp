#include<iostream>
#include<conio.h>

using namespace std;

struct persona{
  char nombre[30];
  int edad;
}p1;

void pedirDatos();
void mostrarDatos(persona);
int main(){
  pedirDatos();
  mostrarDatos(p1);
  getch();
  return 0;

}

void pedirDatos(){
  cout<<"Nombre: ";cin.getline(p1.nombre,30,'\n');
  cout<<"Edada: ";cin>>p1.edad;
}
void mostrarDatos(persona p){
  cout<<"\n\nNombre:"<<p.nombre<<endl;
  cout<<"Edad: "<<p.edad<<endl;
}
