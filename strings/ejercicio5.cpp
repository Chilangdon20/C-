#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char w1[] = "fer";
	char w2[] = "fras";
	char w3[30];
	
	strcpy(w3,w1);
	strcat(w3,w2);
	
	cout<<w3<<endl;
	
	
	getch();
	return 0;
}