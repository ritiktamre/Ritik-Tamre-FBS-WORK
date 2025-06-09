////SEARCH GIVEN NUMBER IN ARRAY

#include<stdio.h>
int main()
{
	int a[5];
	int i,num;
	printf("enter the array element:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
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
