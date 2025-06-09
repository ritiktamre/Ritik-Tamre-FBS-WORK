#include<stdio.h>
int main()
{
	int start=1,end=500,i,sum,temp,rem;
	
	for(i=1;i<=500;i++)
	{
		sum=0;
		temp=i;
		
		while(temp!=0)
		{
			rem=temp%10;
			sum=sum+(rem*rem*rem);
			temp=temp/10;
		}
		if(sum==i)
        {
      	printf("%d",sum);
	   }
      
	  }
}
