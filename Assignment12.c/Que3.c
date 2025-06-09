////SUM OF ALL NUMBERS


#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int* a=(int*)malloc(sizeof(int) *5);
	int i,sum=0;
	
	printf("enter the array element:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("SUM DIGIT=%d",sum);
	
	free(sum);
}
