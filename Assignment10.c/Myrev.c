////MYSTRREV()

#include<stdio.h>
#include<string.h>

char* mystrrev(char*);

int main()
{
	char a[20];
	
	printf("ENTER STRING:");
	scanf("%s",&a);
	
	 char* ptr=mystrrev(a);
	printf("%s",ptr);
}

 char* mystrrev(char* a)
   {
   	int len=strlen(a);
   	int i;
   	for(i=0;i<len/2;i++)
   	{
   		char temp;
   		 temp=a[i];
   		a[i]=a[len-1-i];
   		a[len-1-i]=temp;
	   }
	   return a ;
   }
