#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct deportista{
  char nombre[30];
  char pais[30];
  int num_medallas;
}dep[100];

int main(){
  int max =0,pos;
  int numDep;
  cout<<"Numero de depotistas: ";
  cin>>numDep;

  for(int i = 0;i<numDep;i++){
    fflush(stdin);
    cout<<"nombre: ";
    cin.getline(dep[i].nombre,30,'\n');
    cout<<"pais: ";
    cin.getline(dep[i].pais,30,'\n');
    cout<<"numero medallas: ";
    cin>>dep[i].num_medallas;
    if(dep[i].num_medallas>max){max =dep[i].num_medallas;pos=i;}

  }

  cout<<"deportista con mas medallas: "<<dep[pos].nombre<<endl;
  cout<<"num medallas: "<<dep[pos].num_medallas<<endl;
  getch();
  return 0;
}
