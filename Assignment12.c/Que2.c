///SEARCH GIVEN NUMBER IN ARRAY

#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int* a=(int*)malloc(sizeof(int) *5);
	
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
			free(a);
			return 0;
		}
	}
	printf("NUM ARE NOT FOUND");
	free(a);
	return 0;
}
