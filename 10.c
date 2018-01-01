#include <stdio.h>

int main()
{
	int prod,unit,prod1,unit1;
	double price,price1;
	scanf("%d%d%lf%d%d%lf",&prod,&unit,&price,&prod1,&unit1,&price1);
	printf("VALOR A PAGAR: R$ %.2lf\n",unit*price+unit1*price1);
	return 0;
}