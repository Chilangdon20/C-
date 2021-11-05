#include<iostream>
#include<conio.h>
using namespace std;

int maxArray(int *,int);

int main(){
  const int nelementos=5;
  int n[nelementos] = {3,5,2,8,1};
  cout<<"Mayor elemento: "<<maxArray(n,nelementos);

  getch();
  return 0;
}
// direccion de la primera poscion y el numero de elemtnos
int maxArray(int *dirvect,int nelementos){
  int max = 0;
  for(int i = 0;i<5;i++){
    if(*(dirvect+i)>max){
      max = *(dirvect+i);
    }
  }
  return max;
}
