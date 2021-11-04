#include<iostream>
#include<conio.h>

using namespace std;

struct infoDir{
  char address[30];
  char city[30];
  int cp;
};

struct employee{
  char name[30];
  struct infoDir Dir_employee;
  double salario;
}employee[2];

int main(){
  for(int i =0;i<2;i++){
    fflush(stdin);
    cout<<"Digite nombre: ";
    cin.getline(employee[i].name,30,'\n');
    cout<<"Digite direccion: ";
    cin.getline(employee[i].Dir_employee.address,30,'\n');
    cout<<"Digite ciudad: ";
    cin.getline(employee[i].Dir_employee.city,30,'\n');
    cout<<"Digite C.P: ";
    cin>>employee[i].Dir_employee.cp;
    cout<<"Ingrese salario: ";
    cin>>employee[i].salario;
    cout<<"\n";
  }

  for(int i=0;i<2;i++) {
    cout<<"name: "<<employee[i].name<<endl;
    cout<<"Adress: "<<employee[i].Dir_employee.address<<endl;
    cout<<"City: "<<employee[i].Dir_employee.city<<endl;
    cout<<"C.P: "<<employee[i].Dir_employee.cp<<endl;
    cout<<"Salary: "<<employee[i].salario<<endl;
  }

  getch();
  return 0;
}
