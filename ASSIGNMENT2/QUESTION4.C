////price from the user different discount and different gst

#include<stdio.h>

int main()

{
	float price,discount,gst;
	printf("enter the number:");
	scanf("%f",&price);
	
	if(price>=2000)
	{
		discount=0.20;
		gst=0.12;
	}
	else
	if(price>=1500)
	{
		discount=0.15;
		gst=0.10;
	}
	else
	{
		discount=0.05;
		gst=0.05;
	}
	float a=price-(price*discount);
	float b=price*gst;
	float finals=a+b;
    printf("%f",finals);
}
