#include<stdio.h>
#include<math.h>

int main()
{
	double pi = 3.14159,R,A;
	while(scanf("%lf",&R)==1){
		A=pi*pow(R,2);
		printf("A=%.4lf\n",A);
	}
	return 0;
}