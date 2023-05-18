#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char b[100];
	int i=0;
	scanf("%s",a);
	for(i;a[i]!='\0';i++)
	{
		b[i]=a[i];	
	}
	printf("After copy: %s",b);
	return 0;
}
