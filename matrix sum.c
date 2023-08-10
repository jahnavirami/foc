#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10],r,c,i,j;
	system("cls");
	printf("enter number of rows");
	scanf("%d",&r);
	printf("enter number of columns");
	scanf("%d",&c);
	printf("enter the first matrix element");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);
	}
	}
	printf("enter the second matrix element");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	scanf("%d",&b[i][j]);
	}
	}
	printf("sum of matrix\n");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	sum[i][j]=a[i][j]+b[i][j];
	printf("%d ",sum[i][j]);
	}
	printf("\n");
	}
	return 0;	
}
