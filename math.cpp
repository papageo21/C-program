#include<stdio.h>

int is_even(int n);
int is_odd(int n);
int is_square(int n);
int is_cube(int n);

main()
{
	int x;
	
	printf("Dwse enan arithmo: ");
	scanf("%d",&x);
	
	if(is_even(x))
		printf("\nO arithmos einai peritos");
	else if(is_odd(x))
		printf("\nO arithmos einai artios");
	else if(is_square(x))
		printf("\nEinai tetragwno arithmou");
	else if(is_cube(x))
		printf("\nEinai kyvos arithmou");		
	
	
}
int is_even(int n)
{
	if(n%2!=0)
		return 1;
	else
		return 0;	
}
int is_odd(int n)
{
	if(n%2==1)
		return 1;
	else 
		return 0;	
}
int is_square(int n)
{
	int x;
	
	for(x=1; x<n; x++);
	{
		if(x*x==n)
			return 1;
		else
			return 0;	
	}
}
int is_cube(int n)
{
	int x;
	
	for(x=1; x<n; x++)
	{
		if(x*x*x==n)
			return 1;
		else 
			return 0;
	}
}