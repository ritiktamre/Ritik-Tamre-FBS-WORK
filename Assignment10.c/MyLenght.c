#include<stdio.h>
#include<string.h>

int mystrlen(char*);

int main()
{
	char a[20];
	
	printf("ENTER LENGHT:");
	scanf("%s",&a);
	
	int res=mystrlen(a);
	printf("%d",res);
}

int mystrlen(char* a)
 {
 	int len;
 	while(a[len]!='\0')
 	{
 		len++;
	 }
	 return len;
 }
