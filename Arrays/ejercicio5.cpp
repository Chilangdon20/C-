#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int num[100],n,mayor=0;
	
	cout<<"n: "; cin>>n;
	
	for(int i = 0; i<n;i++){
		cout<<" input number: ";cin>>num[i];
		if(num[i]>mayor){mayor = num[i];}
	}
	cout<<mayor<<endl;
	getch();
	return 0;
}