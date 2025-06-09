////MYSTRNCPY()


#include<stdio.h>
#include<string.h>

char* mystrcpy(char*,char*,int);
int main()
{
	char a[10];
	char b[10];
	
	printf("ENTER THE STRING:");
	scanf("%s",&a);
	
	char* ptr=mystrcpy(b,a,3);
	printf("%s",ptr);
}
 char* mystrcpy(char* b,char* a,int n)
  {
  	int i=0;
  	while(i<n && a[i]!='\0')
  	{
  		b[i]=a[i];
  		i++;
	  }
	  while(b[i]='\0'){
	  	 b[i]='\0';
	  	 i++;
	  }
	 
	  
	  return b;
  }
