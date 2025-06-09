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
	int max=a[0];
	int min=a[0];
	
	for(i=1;i<5;i++) 
	{
		if(a[i]>max)
		max=a[i];
		
		if(a[i]<min)
		min=a[i];
	}
	printf("MAXIMUM VALUE=%d",max);
	printf("\nMINIMUM VALUE=%d",min);
}
