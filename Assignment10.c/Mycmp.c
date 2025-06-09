#include<stdio.h>
#include<string.h>
#include<conio.h>

int mystrcmp(char*,char*);
int main()
{
	char a[20];
	char b[20];
	
	printf("enter first string:");
	scanf("%s",&a);
	
	printf("enter second string:");
	scanf("%s",&b);
	
   int res=mystrcmp(a,b);
    printf("%d",res);
	
}
int mystrcmp(char* a,char* b)
{
	int i=0;
	int sum1=0,sum2=0;
	while(a[i]!='\0')
	{
		sum1=sum1+a[i];
		i++;
	}
	i=0;
	while(b[i]!='\0')
	{
		sum2=sum2+b[i];
		i++;
	}
	if(sum1==sum2){
		return 0;
	}
	else
	if(sum1>sum2)
	{
		return 1;
	}
	else
	return -1;

	
}
  
