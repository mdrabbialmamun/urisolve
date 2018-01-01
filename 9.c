#include <stdio.h>
int main()
{
	double sol,sal;
	char nm[10];
	scanf("%s%lf%lf",nm,&sal,&sol);
	printf("TOTAL = R$ %.2lf\n",(sol*15)/100+sal);
	return 0;
}