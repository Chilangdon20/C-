#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct corredor{
  char nombre[30];
  int edad;
  char sexo[12];
  char club[30];

}corredor1;

int main(){
  char categoria[20];
  cout<<"Ingresa tu nombre: ";
  cin.getline(corredor1.nombre,30,'\n');
  cout<<"Ingresa tu edad: ";
  cin>>corredor1.edad;
  fflush(stdin);
  cout<<"sexo: ";
  cin.getline(corredor1.sexo,12,'\n');
  cout<<"Club: ";
  cin.getline(corredor1.club,30,'\n');

  if(corredor1.edad<=18){
    strcpy(categoria,"juvenil");
  }
  if(corredor1.edad<=40){
    strcpy(categoria,"senior");
  }
  else{
    strcpy(categoria,"Veterano");
  }

  cout<<"Tus datos: \n";
  cout<<"nombre: "<<corredor1.nombre<<endl;
  cout<<"Edad: "<<corredor1.edad<<endl;
  cout<<"Sexo: "<<corredor1.sexo<<endl;
  cout<<"Club: "<<corredor1.club<<endl;
  cout<<"Categoria: "<<categoria<<endl;


  getch();
  return 0;
}
