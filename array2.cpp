#include<iostream>
#include<ctime>
#include <cstdlib> 
using namespace std;

int main()
{
	int pin[10];
	int i,min,max;
	
	srand(time(0));
	for(i=0; i<10; i++)
	{
		pin[i]=rand()%1000;
		cout<<pin[i]<<",";
		
	}
	
	min=pin[0];
	
	cout<<endl;
	
	for(i=0; i<10; i++)
	{
		if(pin[i]<min)
		{
				min=pin[i];
		}
	}

	max=pin[1];
	
	for(i=0; i<10; i++)
	{
		if(pin[i]>max)
			max=pin[i];
	}
	
	
	for(i=0; i<10; i++)
	{
		if(pin[i]>min && pin[1]>pin[i])
			{
				pin[1]=pin[i];
			if(pin[i]>min && pin[i]>pin[1] && pin[2]>pin[i] )
				pin[2]=pin[i];
				
		}
	}

	cout<<min<<","<<pin[1]<<","<<pin[2]<<","<<pin[3]<<","<<pin[4]<<","<<pin[5]<<","<<pin[6]<<","<<pin[7]<<","<<pin[8]<<","<<max;
}