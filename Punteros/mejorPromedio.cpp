#incldue<iostream>
#include<conio.>

using namespace std;

struct Estudiante{
  char nombre[30];
  int edad;
  float promedio;
}alumno[3], *ptrEst =  alumno;

void pedirDatos();
void mejorPromedio(Estudiante *);
int main(){
  getch();
  return 0;
}

void pedirDatos(){
  for(int i = 0;i<3;i++){
    fflush(stdin);
    cout<<"Ingrese el Nombre del Estudiante: "<<i<<endl;
    cin.getline((ptrEst+i)->nombre,30,'\n');
    cout<<"Ingrese la edad del Estudiante: "<<i<<endl;
    cin>>(ptrEst+i)->edad;
    cout<<"Ingrese el promedio del estudiante: "<<i<<endl;
    cin>>(ptrEst+i)->promedio;
  }
}

void mejorPromedio(Estudiante *ptrEst){
  float mejor = 0.0;
  int pos = 0;
  for(int i = 0;i<3;i++){
    if((ptrEst+i)->promedio>mayor){
      mayor = (ptrEst+i)->promedio;
      pos = i;
    }
  }

  cout<<"Alumno con mejor promedio: ";
  cout<<"Nombre: "<<(ptrEst+pos)->nombre;
  cout<<"Promedio: "<<(ptrEst+pos)->promedio;

}
