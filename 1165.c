#include <stdio.h>
#include <math.h>

int main()
{
	int i,N,j,k=0;
	long int X;
	scanf("%d",&N);
	if (N>=1&&N<=100)
	{
		for ( i=0;i<N;i++)
		{
			scanf("%ld",&X);
			if ( X>=1&&X<=pow(10,7))
			for (j=1;j<=X;j++)
			if (X%j==0)
			k++;
			printf("%d ",k);
			if (k==1&&k==2){
			printf("%d eh primo\n",X);
			break;
			}
			else {
			printf("%d nao eh primo\n",X);}
			
		}
	}
	return 0;
}