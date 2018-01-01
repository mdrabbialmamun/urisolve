#include <stdio.h>

int main()
{
	char n[100],m[100],o[100];
	scanf("%s",n);
	scanf("%s",m);
	scanf("%s",o);
		if (n[0]=='v')
		{
			if (m[0] == 'a')
			{
				if(o[0]=='c')
				{
					printf("aguia\n");
				}
				else if(o[0]=='o')
				{
					printf("pomba\n");
				}
			}
		else if  (m[0]== 'm')
			{
				if(o[0]=='o')
				{
					printf("vaca\n");
				}
				else if(o[0]=='o')
				{
					printf("homem\n");
				}
			}
		}
	else if (n[0]=='i')
		{
			if (m[0] == 'i')
			{
				if(o[0]=='i')
				{
					printf("pulga\n");
				}
				else if(o[0]=='h')
				{
					printf("lagarta\n");
				}
			}
		else if  (m[0]== 'a')
			{
				if(o[0]=='h')
				{
					printf("sanguessuga\n");
				}
				else if(o[0]=='h')
				{
					printf("minhoca\n");
				}
			}
		}
	
	return 0;
}
			