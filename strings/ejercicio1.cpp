#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char name[30],name2[15];
	int len = 0;	
	cout<<"Name: "<<endl;
	cin.getline(name,30,'\n');
	len = strlen(name);
	strcpy(name2,name);
	cout<<name2<<endl;	
	
	
	getch();
	return 0;
}