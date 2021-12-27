#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 20


main()
{
	int pinakas[SIZE];
	int N,i,max,sum;
	float average;
	
	
	
	do
	{
		printf("Dwse to plithos twn stoixeiwn toy pinaka(5-20): ");
		scanf("%d",&N);
		
	}while(N<5 || N>20);
	
	srand(time(NULL));
	
		for(i=0; i<N;i++)
			pinakas[i]=2+rand()%999;
	
	sum=0;
	
	for(i=0;i<N;i++)
	{
		sum+=pinakas[i];
	}
					
	average=(float)sum/N;
	
	max=0;
	
	for(i=0;i<N;i++)
	{
		if(pinakas[i]>max)
			max=pinakas[i];
	}
	
	printf("[");
	for(i=0; i<N-1;i++)
	{								
	printf("%d,",pinakas[i]);
	}
	printf("%d]\n",pinakas[N-1]);
	
	printf("O mesos oros einai:%.2f\n",average);
	printf("O megalyteros arithmos einai:%d",max);
}