#include<stdio.h>
void res(int[]);
int main()
{
	int a[5],i;
	printf("enter the number:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	res(a);
}
 void res(int a[])
{
	
	int i,sum=0;
	
	
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("SUM DIGIT=%d",sum);
}
