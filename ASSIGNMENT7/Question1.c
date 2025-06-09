//// FIND MAXIMUM AND MINIMUM NUMBER IN ARRAY

#include<stdio.h>
int main()
{
	int a[5];
	int i;
	printf("enter the array element:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	int max=a[0];
	int min=a[0];
	
	for(i=1;i<5;i++) /// 0 ya ek se bhi chla skte h
	{
		if(a[i]>max)
		max=a[i];
		
		if(a[i]<min)
		min=a[i];
	}
	printf("MAXIMUM VALUE=%d",max);
	printf("\nMINIMUM VALUE=%d",min);
}
