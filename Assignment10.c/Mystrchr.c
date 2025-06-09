#include<stdio.h>
#include<string.h>

char* mystrchr(char*,char);

int main()
{
	char a[20];
	char ch='h';
	
	printf("ENTER THE STRING:");
	scanf("%s",&a);
	
	char* ptr=mystrchr(a,ch);
	if(ptr!='\0')
	{
		printf("CHARECTOR ARE FOUND=%d",(ptr-a));
	}
	else
	{
		printf("CHARECTOR ARE NOT FOUND");
	}
}

 char* mystrchr(char* a,char ch)
    {
    	int i=0;
    	while(a[i]!='\0')
    	{
    		if(a[i]==ch)
    		{
    			return(a+i);
			}
			a++;
		}
		return '\0';
	}
