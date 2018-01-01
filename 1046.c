#include <stdio.h>
int main()
{
	double A,B,C;
	scanf("%lf%lf%lf",&A,&B,&C);
	if(A>0&&B>0&&C>0){
	if (A>=B+C)
	{
		printf("NAO FORMA TRIANGULO\n");
	}
 else if (A*A==B*B+C*C)
 {
 	printf("TRIANGULO RETANGULO\n");
 }
 else if(A*A>B*B+C*C)
 {
 	printf("TRIANGULO OBTUSANGULO\n");
 }
 else if (A*A<B*B+C*C)
 {
 	printf("TRIANGULO ACUTANGULO\n");
 }
if ( A==B && A==C)
 {
 	if (B==C)
 	{
 		printf("TRIANGULO EQUILATERO\n");
 	}
 	
 }
 	else if (A!=B||B!=C||C!=A){
 		if (A==B||B==C||C==A){
 			printf("TRIANGULO ISOSCELES\n");
 		}
 		}
	}
 return 0;
}