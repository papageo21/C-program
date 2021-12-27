#include<stdio.h>
#include<stdlib.h>


void add(float i,float j);
void sub(float i,float j);
void mult(float i,float j);
void division(float i,float j);

main()
{
	float i,j;
	char choice;
	
	while(1)
	{	
		system("cls");
		printf("\nDwse ton prwto arithmo: ");
		scanf("%f",&i);
		printf("\nDwse ton deutero arithmo: ");
		scanf("%f",&j);
		
		printf("\nDialekse pia praksi theleis na kaneis(+,-,*,/)\nh gia exodo apo to programma to E: ");
		scanf("%s",&choice);
		
		printf("\n\n");
		
		switch(choice)
		{
			case'+':
				add(i,j);
				break;
			case'-':
				sub(i,j);
				break;
			case'*':
				mult(i,j);
				break;
			case'/':
				division(i,j);
				break;
			case'E':
				exit(0);	
			default:
				printf("Exeis kanei lathos epilogi.\nksanaprospathise.");							
		}
		
		printf("\n\n");
		system("pause");
		
		
	}
	
	
}
void add(float i,float j)
{
	float result;
	
	result=0;
	
	result=i+j;
	
	printf("%.2f + %.2f = %.2f",i,j,result);
}
void sub(float i,float j)
{
	float result;
	
	result=0;
	
	result=i-j;
	
	printf("%.2f - %.2f = %.2f",i,j,result);
	
}
void mult(float i,float j)
{
	float result;
	
	result=0;
	
	result=i*j;
	
	printf("%.2f * %.2f = %.2f",i,j,result);
}
void division(float i,float j)
{
	float result;
	
	result=0;
	
	result=i/j;
	
	printf("%.2f / %.2f = %.2f",i,j,result);
}