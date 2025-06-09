///SEARCH THE CHARECTOR FRON THE USER

#include<stdio.h>
#include<string.h>

int main()
{
	char a[20];
	char ch;
	int i;
	int temp=0;
	
	printf("ENTER THE STRING:");
	scanf("%s",a);
	
	printf("SEARCH THE CHARECTOR :");
	scanf(" %c",&ch);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==ch)
		{
			printf("CHARECTOR ARE FOUND=%c",ch);
			temp=1;
			break;
		}
		
		
	}
	if(temp==0)
	{
	  printf("CHARECTOR ARE NOT FOUND");
 	  return 0;
	}
	
}
