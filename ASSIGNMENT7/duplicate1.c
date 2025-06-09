////DUPLICATE THE NUMBER IN THE ARRAY

#include<stdio.h>
int main()
{
	int a[10],i,j;
	printf("enter the number:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
			{
				printf("NUM IS DUPLICATE=%d\n",a[i]);
				break;
			}
		}
	}
	return 0;
}
