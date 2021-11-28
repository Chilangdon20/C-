#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
void pedirPalabra();
void contVoc(char * ); // posicion inical de la variable que digite el user

char word[30];
int main(){
  pedirPalabra();
  contVoc(word);
  getch();
  return 0;
}
void pedirPalabra(){
  cout<<"Input the word: ";
  cin.getline(word,30,'\n');
  strupr(word);
}

void  contVoc(char *word) {
  int contA=0,contE=0,contI=0,contO=0,contU=0;

  while(*word){
    switch (*word) {
      case 'A':contA++;break;
      case 'E':contE++;break;
      case 'I':contI++;break;
      case 'O': contO++;break;
      case 'U': contU++;break;
    }
    word++;
  }
  cout<<"\nNumber of times letter A: "<<contA<<endl;
  cout<<"\nNumber of times letter E: "<<contE<<endl;
  cout<<"\nNumber of times letter I: "<<contI<<endl;
  cout<<"\nNumber of times letter O: "<<contO<<endl;
  cout<<"\nNumber of times letter U: "<<contU<<endl;

}
