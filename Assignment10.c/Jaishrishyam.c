///STRCAT()

#include<stdio.h>
#include<string.h>
#include<conio.h>

char* mystrcat(char*,char*);

int main()
{
	char a[20];
	char b[20];
	
	printf("ENTER THE FIRST STRING:");
	scanf("%s",&a);
	
	printf("ENTER THE SECOND STRING:");
	scanf("%s",&b);
	
	mystrcat(a,b);
	printf("%s",a);
}

  char* mystrcat(char* b,char* a)
   {
   	int i=0;
   	while(* b)
   	{
   		b++;
	   }
	   while(* a)
	   {
	   	* b=* a;
	   	a++;
	   	b++;
	   }
	   * b='\0';
	   return b;
   }
