#include<iostream>
#include<conio.h>
using namespace std;
struct Fecha{
  int dia,mes,anio;
}f1,f2;
void pedirDatos();
Fecha mayor(Fecha,Fecha);
void mostrarDatos(Fecha);
int main(){
  pedirDatos();
  Fecha f = mayor(f1,f2);
  mostrarDatos(f);
  getch();
  return 0;
}

void pedirDatos(){
  cout<<"Ingresa el dia 1ra fecha: ";cin>>f1.dia;
  cout<<"Ingresa el mes 1ra fecha: ";cin>>f1.mes;
  cout<<"Ingresa el anio 1ra fecha: ";cin>>f1.anio;
  cout<<"Ingresa el dia 2da fecha: ";cin>>f2.dia;
  cout<<"Ingresa el mes de la segunda fecha: ";cin>>f2.mes;
  cout<<"Ingresa el anio de la segunda fecha: ";cin>>f2.anio;
}

Fecha mayor(Fecha f1, Fecha f2){
  Fecha mayorFecha;
  if((f1.anio>=f2.anio)&&(f1.mes>=f2.mes)&&(f1.dia>f2.dia)){
    mayorFecha = f1;
  }
  else{
    mayorFecha = f2;
  }
  return mayorFecha;
}
void mostrarDatos(Fecha f){
  cout<<"La fecha mayor es: "<<f.anio<<"/"<<f.mes<<"/"<<f.anio;
}
