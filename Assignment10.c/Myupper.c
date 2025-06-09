#include<stdio.h>
#include<string.h>

void mystrupr(char*);

void main()
{
	char c[100];
	printf("ENTER STRING:");
	scanf("%s",&c);
	
	mystrupr(c);
	printf("%s",c);
}
 void  mystrupr(char* c)
 {
 	int i=0;
   	while(c[i])
   	{
   		if(c[i]>='a')
   		{
   			if(c[i]<='z')
   			{
   				c[i]=c[i]-32;
			}
			c++;
		}
		   
	  }
	
  }
