#include<stdio.h>
#include<string.h>

char* mystrchr(char* ,char,int );

void main()
{
	char str[10];
	char ch='o';
	
	printf("ENTER THE STRING:");
	scanf("%s",&str);
	
    char* ptr = mystrchr(str, ch,5);
	if(ptr!='\0')
    	printf("charector found at index=%d",(ptr-str));
	else
	   printf("CHARECTOR NOT FOUND");
	
}
 char* mystrchr(char* str,char ch,int n)
 {
 	int i=0;
 	while(str[i]!='\0' && i<n)
 	{
 		if(str[i]==ch)
 		{
 			return(str+i);
		 }
		 i++;
	 }
	 return '\0';
 }
