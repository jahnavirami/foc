#include<stdio.h>
int main()
{
	int i,n,m,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		i=n%10;
		sum=sum+i*i*i;
		n=n/10;
	}
	if(sum==m)
	printf("it is a armstrong number");
	else
	printf("it is not a armstrong number");
	return 0;
}
