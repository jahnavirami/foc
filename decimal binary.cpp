#include<stdio.h>
int main()
{
	int i,n,decimal=0,base=1;
	printf("enter the value of n");
	scanf("%d",&n);
	while(n!=0)
	{
	i=n%10;
	decimal=decimal+base*i;
	n=n/10;
	base=base*2;
    }
	printf("%d",decimal);
	return 0;
}
