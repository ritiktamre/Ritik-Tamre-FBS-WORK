#include<stdio.h>
 void perfect(int*);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	  perfect(&no1);
	
}
   void perfect(int* a)
{
	int n,i,sum=0;
	n=* a;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	printf("NO IS PERFECT");
	else
	printf("NO IS NOT PERFECT");
}
