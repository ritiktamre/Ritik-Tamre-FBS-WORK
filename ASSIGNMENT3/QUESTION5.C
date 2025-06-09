//// ARMSTRONG OR NOT

#include<stdio.h>
 
int main()
{
	int num,rem,sum=0,temp;
     printf("enter the number:");
     scanf("%d",&num);
     temp=num;
	
	while(num>0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	if(sum==temp)
	printf("NUM IS ARMSTRONG");
	else
   printf("NUM IS NOT ARMSTRONG");
}
