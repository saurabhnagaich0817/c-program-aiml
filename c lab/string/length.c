#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i=0;
	scanf("%s",a);
	for(i;a[i]!='\0';i++);
	printf("Length of string: %d",i);
	return 0;
}
