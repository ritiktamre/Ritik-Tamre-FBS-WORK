#include<stdio.h>
#include<string.h>

char* mystrcpy(char*,char*);
int main()
{
	char a[10];
	char b[10];
	
	printf("ENTER THE STRING:");
	scanf("%s",&a);
	
	char* ptr=mystrcpy(b,a);
	printf("%s",ptr);
}
 char* mystrcpy(char* b,char* a)
  {
  	int i=0;
  	while(a[i]!='\0')
  	{
  		b[i]=a[i];
  		i++;
	  }
	  b[i]='\0';
	  
	  return b;
  }
