////CHECK NUMBER IS PERFECT OR NOT

#include<stdio.h>

int main()
{
	int n,i,sum=0;
    
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	printf("NUM IS PERFECT");
	else
	printf("NUM IS NOT PERFECT");
}
