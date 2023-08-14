#include<stdio.h>
int main()
{
	int n,rev=0,i,m;
	printf("enter the value of n");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		i=n%10;
		rev=rev*10+i;
		n=n/10;
	}
	if(rev==m)
	printf("n is a palindrome");
	else
	printf("n is not palindrome");
	return 0;
}
