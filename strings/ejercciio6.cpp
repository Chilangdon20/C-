#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char name[10],greeting[] = "Hello, what´s up",t[20];
	
	cout<<"Name: "<<endl;cin.getline(name,10,'\n');
	
	strcpy(t,greeting);
	strcat(t,name);
	
	cout<<t ;
	
	
	getch();
	return 0;
}