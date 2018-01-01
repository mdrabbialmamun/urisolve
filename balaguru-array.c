#include <stdio.h>
#include <math.h>
int main()
{
	int i;
	float x[10],value,total;
	
	printf("ENTER 10 REAL NUMBER\n"); 
	for(i=0;i<10;i++){
	scanf("%f",&value);
	x[i]=value;
	}
	total = 0;
	for (i=0;i<10;i++)
	{
		total+=pow(x[i],2);
		
		printf("\nx[%2d] = %5.2f\n",i+1,x[i]);
	}
	printf("Total = %.2f",total);
	return 0;
}