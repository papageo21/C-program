#include<iostream>
#include<ctime>
#include <cstdlib> 
using namespace std;

#define SIZE 100

int main()
{
	int pin[SIZE];
	int N,i,max,min,art;
	
	cout<<"Dwse to plhthos tou pinaka pou theleis: ";
	cin>>N;
	
	srand(time(NULL));
	
	for(i=0; i<N; i++)
	{
		pin[i]=1+rand()%51;
	
	}
	
	max=pin[0];
	
	for(int i=0; i<N; i++)
	{
		if(pin[i]>max)
			max=pin[i];
				
	}
	
	min=pin[0];
	
	for(i=0; i<N; i++)
	{
		if(pin[i]<min)
			min=pin[i];
	}
	
	art=0;
	
	for(i=0; i<N; i++)
	{
		if(pin[i]%2==1)
			art++;
	}
	
	
	for(i=0; i<N; i++)
	{
		
		cout<<pin[i]<<",";
	}
			
	cout<<endl<<"O megistos arithmos einai: "<<max;
	cout<<endl<<"O elaxistos arithmos einai: "<<min;
	cout<<endl<<"Yparxoun "<<art<<" Artioi arithmoi";
}