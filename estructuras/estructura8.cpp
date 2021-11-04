#include<iostream>
#include<conio.h>
using namespace std;

struct persona{
  char nombre[30];
  bool discapacidad;
}personas[100],personasSin[100],personasCon[100];

int main(){
  int numPersona,o,p;
  cout<<"Ingrese el numero de personas: ";
  cin>>numPersona;
  for(int i =0;i<numPersona;i++){
    cout<<"Nombre: "<<endl;
    cin.getline(personas[i].nombre,30,'\n');
    cout<<"Discapacidad (1-0): "<<endl;
    cin>>personas[i].discapacidad;
    if(personas[i].discapacidad==1){
      strcpy(personasCon[i].nombre,persona[i].nombre);
      o++;
    }
    else{
      strcpy(personasSin[i].nombre,persona[i].nombre);
      p++;
    }
  }
  cout<<"Persona sin discapacidad: "<<endl;
  for(int i = 0;i<o;i++){
    cout<<personasSin[i]<<endl;
  }
  cout<<"Personas con discapacidad: "<<endl;
  for(int i =0;i<p;i++){
    cout<<personasCon[i]<<endl;
  }
  getch();
  return 0;
}
