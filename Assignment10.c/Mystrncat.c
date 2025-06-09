#include<stdio.h>
#include<conio.h>
#include<string.h>

char* mystrcat(char*,char*,int);
int main()
{
	char str1[10];
	char str2[20];
	
	printf("ENTER THE FIRST STRING:");
	scanf("%s",&str1);
	
	printf("ENTER THE SECOND STRING:");
	scanf("%s",&str2);
	
	 mystrcat(str1,str2,3);
	 printf("\nCONCATENATED STRING=%s",str1);
	
	
}
 char* mystrcat(char* dest, char* src,int n)
 {
 
 	while(*dest)
 	{
 		dest++;
	 }
	 while(*src && n--)
	 {
	 	*dest=*src;
	 	dest++;
	 	src++;
	 }
	 
	 *dest='\0';
	 
	 return dest;
	
}
