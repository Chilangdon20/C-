#include<iostream>
#include<conio.h>
using namespace std;

struct alumno{
  char nombre[30];
  int edad;
  float promedio;

}e[3];

int main(){
  float mayor = 0;
  int pos;
  for(int i = 0;i<3;i++){
    fflush(stdin);
    cout<<"Ingresa tu nombre: ";
    cin.getline(e[i].nombre,30,'\n');
    cout<<"Ingresa tu edad: ";
    cin>>e[i].edad;
    cout<<"Ingresa tu promedio: ";
    cin>>e[i].promedio;
    if(e[i].promedio>mayor){
      mayor = e[i].promedio;
      pos = i;
    }
  }

  cout<<"El mejor estudiante es: "<<e[pos].nombre<<endl;
  cout<<"Su promedio es: "<<e[pos].promedio<<endl;

  getch();
  return 0;
}
