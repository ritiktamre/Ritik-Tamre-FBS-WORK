#include<stdio.h>
void result(int []);
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
	int i,num;
	
	printf("enter the number in search:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		if(num==a[i])
		{
			printf("NUM IS FOUND=%d",a[i]);
			return;
		}
	}
	printf("NUM ARE NOT FOUND");
}
