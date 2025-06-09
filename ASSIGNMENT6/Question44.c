#include<stdio.h>
 void strong(int*,int*);
int main()
{
	int no1,no2;
	printf("enter any number:");
	scanf("%d%d",&no1,&no2);
	strong(&no1,&no2);
}
  void strong(int* a,int* b)
{
	int start,end,rem;
	int i,temp,sum,fact=1,j;
	  start=* a;
	  end=* b;
	
	for(i=start;i<=end;i++)
	{
		temp=i;
		sum=0;
		while(temp!=0)
		{
			rem=temp%10;
			fact=1;
			for(j=rem;j>=1;j--)
			{
				fact=fact*j;
				
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(i==sum)
		printf("%d\n",i);
	}
}
