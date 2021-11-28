#include<iostream>
#include<conio.h>
using namespace std;

struct Etapa{
  int hrs;
  int min;
  int seg;
}ciclista[3], *ptrCiclista = ciclista;

void pedirDatos();
void calcEtapa(Etapa *);
int main(){
  pedirDatos();
  calcEtapa(ptrCiclista);
  getch();
  return 0;
}

void pedirDatos(){

  for(int i = 0;i<3;i++){
    fflush(stdin);
    cout<<"Horas ";cin>>(ptrCiclista+i)->hrs;
    cout<<"Minutos: ";cin>>(ptrCiclista+i)->min;
    cout<<"Segundos: ";cin>>(ptrCiclista+i)->seg;
  }
}


void calcEtapa(Etapa *ptrCiclista){
  int hrst = 0, mint = 0,segt = 0;
  for(int i = 0;i<3;i++){
    hrst += (ptrCiclista+i)->hrs;
    mint += (ptrCiclista+i)->min;

    if(mint>=60){
      mint -= 60;
      hrst++;
    }
    segt += (ptrCiclista+i)->segt;
    if(segt>=60){
      segt -=60;
      mint++;
    }
  }

  cout<<"Hrs totales: "<<hrsT<<endl;
  cout<<"Min totales: "<<mint<<endl;
  cout<<"Seg totales: "<<segt<<endl;
}
