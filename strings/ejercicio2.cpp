#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main(){
	
	char word[50];
	
	int len = 0;
	
	cout<<"word: "<<endl;cin.getline(word,50,'\n');
	len = strlen(word);
	
	
	if(len>10){cout<<word<<endl;}
	
	
	
	getch();
	return 0;
}