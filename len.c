#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i,length=1; 
	printf("enter the string");
	scanf("%s",str);
	for(i=1;str[i]!='\0';i++)
	{
		length++;
	}
	printf("%d",length);
	return 0;
}
