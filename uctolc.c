#include<stdio.h>
int rmain()
{
	char upr,ascii;
	printf("enter the uppercase character");
	scanf("%c",&upr);
	ascii=upr+32;
	printf("lower case %c",ascii);
	return 0;
}
