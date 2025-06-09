////CALCULATE SUM OF NUMBER IN GIVEN RANGE

#include<stdio.h>
int main()
{
	int num;
 	int i=1,sum=0;
 	
 	printf("enter the number:");
 	scanf("%d",&num);
 	
 	
 	while(i<=10)
 	{
 		sum=sum+i;
 		printf("%d\n",sum);
 		i++;
	 }
}
