#include<stdio.h>
#include<string.h>

void mystrupr(char*);

int main()
{
	char a[20];
	
	printf("ENTER THE NUMBER:");
	scanf("%s",&a);
	
	mystrupr(a);
     printf("%s",a);
}

void mystrupr(char* a)
 {
 	int i=0;
 	while(a[i]!='\0')
 	{
 		if(a[i]>='a')
 		{
 			if(a[i]<='z')
 			{
 				a[i]=a[i]-32;
			 }
			 a++;
		 }
	 }
	 
 	
 }
