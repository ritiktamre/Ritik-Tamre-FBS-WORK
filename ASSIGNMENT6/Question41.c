#include<stdio.h>
 void armstrong(int*,int*);
int main()
{
	int no1,no2;
	printf("enter any number:");
	scanf("%d%d",&no1,&no2);
	armstrong(&no1,&no2);
}
  void armstrong(int* a,int* b)
{
	int start,end,i,temp,sum,rem;
	start=* a;
	end=* b;
	
	
	for(i=start;i<=end;i++)
	{
		temp=i;
		sum=0;
		
		while(temp!=0)
		{
			rem=temp%10;
			sum=sum+(rem*rem*rem);
			temp=temp/10;
		}
		if(i==sum)
		printf("%d\n",i);
	}
}
