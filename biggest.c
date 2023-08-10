#include<stdio.h>
int main()
{
	int i,n,a[10],max,min;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the value of elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }  
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++)
	{
	if(a[i]>max)
	max=a[i];
	else
	if(a[i]<min)
	min=a[i];
    }
	printf("max is %d",max);
	printf("min is %d",min);
	return 0;
}
