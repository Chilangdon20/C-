#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct empleados{
  char nombre[30];
  float salario;
}emp[100];

int main(){
  float min=999999,max=0;
  int posmin,posmax;
  int numEmp;
  cout<<"numero de empleados: ";
  cin>>numEmp;
  for(int i =0;i<numEmp;i++){
    fflush(stdin);
    cout<<"Ingresa el nombre: ";
    cin.getline(emp[i].nombre,30,'\n');
    std::cout << "Salario: "  << '\n';
    cin>>emp[i].salario;
    if(emp[i].salario>max){max = emp[i].salario;posmax=i;}
    if(emp[i].salario<min){min = emp[i].salario;posmin=i;}
  }
  cout<<"Empleado mejor pagado: "<<emp[posmax].nombre<<endl;
  cout<<"Salario: "<<emp[posmax].salario<<endl;
  cout<<"Empleado menor pagado "<<emp[posmin].nombre<<endl;
  cout<<"Salario: "<<emp[posmin].salario<<endl;
  system("pause");
  getch();
  return 0;
}
