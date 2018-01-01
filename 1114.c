#include  <stdio.h>
int main()
{
	int i,x;
	for(i=0;;i++){
	scanf("%d",&x);
	if (x==2002){
		printf("Acesso Permitido\n");
		break;
	}
	else {
		printf("Senha Invalida\n");
		}
	}
	return 0;
}
		
	