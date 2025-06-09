#include<stdio.h>
 void perfect(int*,int*);
 int main()
 {
 	int no1,no2;
 	printf("enter any number:");
 	scanf("%d%d",&no1,&no2);
 	perfect(&no1,&no2);
 }
   void perfect(int* a,int* b)
{
	int start,end;
	int sum,i;
	i=start;
	start=* a;
	end=* b;
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
			printf("%d\n",sum);
		}
		start++;
	}
}
