#include<iostream>
#include<conio.h>
using namespace std;

struct promedio{
  float nota1;
  float nota2;
  float nota3;
};
struct alumno{
  char nombre[30];
  char sexo[12];
  int edad;
  struct promedio prom;
}alumno1;

int main(){
  float promedio=0;
  cout<<"nombre: "<<endl;
  cin.getline(alumno1.nombre,30,'\n');
  cout<<"sexo: "<<endl;
  cin.getline(alumno1.sexo,12,'\n');
  cout<<"edad: "<<endl;
  cin>>alumno1.edad;
  cout<<"calificacion1: "<<endl;
  cin>>alumno1.prom.nota1;
  cout<<"Calificacion2: "<<endl;
  cin>>alumno1.prom.nota2;
  cout<<"Calificacion3: "<<endl;
  cin>>alumno1.prom.nota3;
  promedio = (alumno1.prom.nota1+alumno1.prom.nota2+
  alumno1.prom.nota3)/3;

  cout<<"Nombre: "<<alumno1.nombre;
  cout<<"promedio: "<<promedio;
  getch();
  return 0;
}
