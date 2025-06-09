////print armstrong number in given range 1 to n

#include<stdio.h>
int main()
{
	int start,end,i,temp,sum,rem;
	printf("enter any number:");
	scanf("%d%d",&start,&end);
	
	
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
