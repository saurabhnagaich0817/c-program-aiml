#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char b[100];
	int i=0,j;
	printf("a:");
	scanf("%s",a);
	printf("b:");
	scanf("%s",b);
	for(i;a[i]!='\0';i++);
	for(j=0;a[j]!='\0';j++)
	{
		a[i+j]=b[j];
	}
	printf("After concatinate: %s",a);
	return 0;
}
