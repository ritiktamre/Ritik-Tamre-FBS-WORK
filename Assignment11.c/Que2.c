///REPLACE A TO $


#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	char a[20];
	int i;
	
	printf("ENTER THE STRING:");
	scanf("%s",a);
	
	for(i=0;i<a[1]!='\0';i++)
	{
		if(a[i]=='a')
		a[i]='$';

	}
	printf("result=%s",a);
	
}

