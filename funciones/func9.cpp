#include<iostream>
#include<stdlib.h>

using namespace std;

void cambioDivisa(int n,int&, int&,int&,int&,int&,int&);

//int n;

int main(){
  int valor,cien,cincuenta,veinte,diez,cinco,uno;

  cout<<"ingresa un numero: "<<endl;
  cin>>valor;
  cambioDivisa(valor,cien,cincuenta,veinte,diez,cinco,uno);

  cout<<"cantidad de billetes a entregar: "<<endl;
  cout<<"cien:"<<cien<<endl;
  cout<<"cincuenta: "<<cincuenta<<endl;
  std::cout << "veinte: "<<veinte << '\n';
  std::cout << "diez: " <<diez<< '\n';
  cout<<"cinco: "<<cinco<<endl;
  cout<<"uno: "<< uno<<endl;
  system("pause");
  return 0;
}


void cambioDivisa(int valor, int& cien,int& cincuenta, int& veinte, int& diez,
                  int& cinco, int& uno){

                    cien = valor/100;
                    valor %= 100;
                    cincuenta = valor/50;
                    valor %= 50;
                    veinte = valor/20;
                    valor %= 20;
                    diez = valor/10;
                    valor %= 10;
                    cinco = valor/5;
                    valor %= 5;
                    uno = valor/1;
                    valor %= 1;


                  }
