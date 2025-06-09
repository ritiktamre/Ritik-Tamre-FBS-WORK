////FIND EVEN OR ODD NUMBERS

#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter the array element:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		printf("\nNUM IS EVEN");
		else
		printf("\nNUM IS ODD");
	}
}
