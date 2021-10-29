#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	
	float temperatura,media=0,min=999,max=0;
	float sumT=0;
	
	
	for(int i = 0;i<24;i+=4){
		
		cout<<"Ingresa la temperatura: "<<i<<endl;
		cin>>temperatura;
		
		sumT += temperatura;
		
		
		if(temperatura<min){
			min = temperatura;
		}
		
		if(temperatura>max){
			max=temperatura;
		}
		
		media = sumT/6;
		
		
	}
	
	cout<<"\nMedia: "<<media<<endl;
	cout<<"Mayor: "<<max<<endl;
	cout<<"menor: "<<min<<endl;
	getch();
	return 0;
	
	
	
}