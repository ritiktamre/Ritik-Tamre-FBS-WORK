#include<stdio.h>
void result(int[]);
int main()
{
	int a[5],i;
	printf("enter the number:");
	for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    result(a);
}
 void result(int a[])
{
	int i;
	
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		printf("\nNUM IS EVEN");
		else
		printf("\nNUM IS ODD");
	}
}
