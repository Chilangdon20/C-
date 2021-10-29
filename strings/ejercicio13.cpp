#include<iostream>
#include<conio.h>


using namespace std;


int main(){
	
	// atoi = int, atof = float
	
	char n1[10],n2[10];
	int num1;
	float num2,add;
	
	cout<<"n1: "<<endl; cin.getline(n1,10,'\n');
	cout<<"n2: "<<endl; cin.getline(n2,10,'\n');
	
	num1 = atoi(n1);
	num2 = atof(n2);
	
	add = num1 +num2;
	
	cout<<add<<endl;
	
	
	getch();
	return 0;
}