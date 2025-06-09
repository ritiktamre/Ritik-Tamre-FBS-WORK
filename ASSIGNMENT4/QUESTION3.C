////PRINT PERFECT NUMBER IN THE GIVEN RANGE 1 TO N

#include<stdio.h>
 int main()
{
	int start,end;
	int sum,i;
	printf("enter the number:");
	scanf("%d%d",&start,&end);
	
	i=start;
	while(start<=end)
	{
		sum=0;
		for(i=1;i<start;i++)
		{
			if(start%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==start)
		{
			printf("%d\n",start);
		}
		start++;
	}
}
