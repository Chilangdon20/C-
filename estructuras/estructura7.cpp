#include<iostream>
#include<conio.h>

using namespace std;

struct tiempoCiclista{
  int horas;
  int minutos;
  int segundos;
}ciclistas[100];

int main(){
  int etapa;
  int sumahoras=0,sumamin=0,sumaseg=0,tot=0;
  cout<<"Ingrese el numero de etapas: "<<endl;
  cin>>etapa;
  for(int i = 0;i<etapa;i++){

    cout<<"Horas: "<<endl;
    cin>>ciclistas[i].horas;
    fflush(stdin);
    cout<<"Minutos: "<<endl;
    cin>>ciclistas[i].minutos;
    cout<<"Segundos: "<<endl;
    cin>>ciclistas[i].segundos;
    sumahoras += ciclistas[i].horas;
    sumamin += ciclistas[i].minutos;
    sumaseg += ciclistas[i].segundos;
    tot = sumahoras+sumamin+sumaseg;
  }
  cout<<"Horas totales: "<<sumahoras<<endl;
  cout<<"minutos totales: "<<sumamin<<endl;
  cout<<"segundos totales: "<<sumaseg<<endl;
  cout<<"La suma  total es: "<<tot<<endl;
  getch();
  return 0;
}
