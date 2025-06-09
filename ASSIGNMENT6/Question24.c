#include<stdio.h>
 void finalp(int*);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	 finalp(&no1);
}
 void finalp(int* r)
{
	int price,discount,gst;
	price=* r;
	
	if(price>=2000)
	{
		discount=0.20;
		gst=1.15;
	}
	else
	if(price>=1500)
	{
		discount=0.15;
		gst=1.13;
	}
	else
	{
		discount=0.05;
		gst=1.05;
	}
	int a=price-(price*discount);
	int b=price*gst;
	int finals=a+b;
	printf("FINAL SALARY=%d",finals);
}
