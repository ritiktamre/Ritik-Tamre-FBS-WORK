#include<stdio.h>
#include<string.h>

int main()
{
	char a[20];
	int i;
	printf("ENTER THE STRING:");
	scanf("%s",a);
	
	int len=strlen(a);
	for(i=0;i<a[i]!='\0';i++)
	{
		char temp;
		temp=a[0];
		a[0]=a[len-1];
		a[len-1]=temp;
	}
	printf("%s",a);
	
}
