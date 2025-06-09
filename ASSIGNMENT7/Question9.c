//// REVERSE THE GIVEN NUMBER

#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter the array element:");
	for(i=0;i<=4;i++)
	scanf("%d",&a[i]);
	
	for(i=4;i>=0;i--)
	printf("REVERSE NUMBER=%d\n",a[i]);
}
