#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r=2,c=2,a[10][10],b[10][10],i,j;
	printf("enter the first matrix element");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);
	}
	}
	printf("enter the resultant matrix\n");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	b[j][i]=a[i][j];
	}
    }   
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	printf("%d\n",b[i][j]);
	}
	printf("\n");
	}
	return 0;
}
