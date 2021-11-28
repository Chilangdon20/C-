#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
void pedirPalabra();
int contVocal(char *);

char palabra[30];
int main(){
  pedirPalabra();
  std::cout << "\nThe number of vowels is: " <<contVocal(palabra)<< '\n';
  getch();
  return 0;;
}

void pedirPalabra(){
  cout<<"Input a word: "<<endl;
  cin.getline(palabra,30,'\n');
  strupr(palabra);
}

int contVocal(char *palabra){
  int cont = 0;

  while(*palabra){
    switch (*palabra) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U': cont++;
    }
    palabra++;
  }
  return cont;
}
