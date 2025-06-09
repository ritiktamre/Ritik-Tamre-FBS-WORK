#include<stdio.h>
 
int main()

{
	int num,first,last,sum;
	printf("enter the number:");
	scanf("%d",&num);
	last=num%10;
	
	while(num>10)
	{
		num=num/10;
		first=num;
		sum=first+last;
	}
	printf("FIRST=%d",first);
	printf("\nLAST=%d",last);
	printf("\nSUM OF FIRST AND LAST=%d",sum);
}
