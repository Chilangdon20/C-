#include<iostream>
#include<conio.h>

using namespace std;

void calc_anios(int,int&,int&,int&);

int main(){

  int totaldias,anio,mes,dia;
  std::cout << "ingresa el numero de dias: " << '\n';
  cin>>totaldias;
  calc_anios(totaldias,anio,mes,dia);
  cout<<"fecha actual: "<<dia+1<<"/"<<mes+1<<"/"<<anio+2000<<endl;

  system("pause");
  return 0;
}

void calc_anios(int totaldias,int& anio, int& mes, int& dia){


  anio = totaldias/365;
  totaldias %= 365;
  mes = totaldias/30;
  dia =  totaldias % 30;

}
