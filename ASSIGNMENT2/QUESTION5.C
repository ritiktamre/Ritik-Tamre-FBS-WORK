#include<stdio.h>
int main()

{
	float price,discount,finalprice;
	int student;
	
	printf("enter the number:");
	scanf("%f",&price);
	
	printf("if are the student press or otherwise 0:");
	scanf("%d",&student);

	if(price>=2000)
	if(student==1)
	discount=0.20;
	else
	discount=0.15;
	
	else
	if(price>=1000)
	if(student==0)
	discount=0.10;
	else
	discount=0.05;
	
	finalprice=price-(price*discount);
	printf("%f",finalprice);
}
