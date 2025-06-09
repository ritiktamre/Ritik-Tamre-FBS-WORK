#include<stdio.h>
#include<conio.h>
#include<string.h>

void mystrcat(char*,char*);
int main()
{
	char str1[10];
	char str2[20];
	
	printf("ENTER THE FIRST STRING:");
	scanf("%s",&str1);
	
	printf("ENTER THE SECOND STRING:");
	scanf("%s",&str2);
	
	 mystrcat(str1,str2);
	 printf("\nCONCATENATED STRING=%s",str1);
	
	
}
 void mystrcat(char* dest, char* src)
 {
 
 	while(*dest)
 	{
 		dest++;
	 }
	 while(*src)
	 {
	 	*dest=*src;
	 	dest++;
	 	src++;
	 }
	 
	 *dest='\0';
	 
	
}
