////FIRST AND LAST CHARECTOR SWAP IN THE GIVEN ARRAY

#include<stdio.h>
#include<string.h>

int main()
{
	char a[10];
	
	printf("ENTER THE STRING:");
	scanf("%s",a);
	int len=strlen(a);
	
	if(len>1)
	{
		char temp;
		temp=a[0];
		a[0]=a[len-1];
		a[len-1]=temp;
	}
	printf("RESULT=%s",a);
	
}
