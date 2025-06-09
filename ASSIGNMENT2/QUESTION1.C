#include<stdio.h>

int main()
{
	float price,discount,finalprice;
	
	printf("ENTER THE PRICE:");
	scanf("%f",&price);
	
	if(price<=2000)
	{
		discount=0.10;
	}
	else
	{
		discount=0.05;
	}
	if(price<=1000)
	{
		discount=0.08;
	
	}
	else
	{
		discount=0.04;
	}
	finalprice=price-(price*discount);
	printf("FINAL PRICE=%f",finalprice);
	
}
