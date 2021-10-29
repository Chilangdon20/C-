#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char word1[] = "fer",word2[]="fras";
	
	if(strcmp(word1,word2)==0){cout<<"las cadenas son iguales";}
	if(strcmp(word1,word2)!=0){cout<<"las cadenas son diferentes";}
	if(strcmp(word1,word2)>=0){cout<<"palabra 1 es mayor a palabra 2";}
	
	
	getch();
	return 0;
}