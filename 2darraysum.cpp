#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,a[2][4],r=2,c=4,sum=0;
	printf("enter first element matrix is: ");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<r;i++)
	{
    for(j=0;j<c;j++)
    {
	sum=sum+a[i][j];
    }
	printf("sum of elements is %d",sum);
    }
	return 0;
}
