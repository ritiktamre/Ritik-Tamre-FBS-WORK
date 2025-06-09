#include<stdio.h>
 void fprice(float*);
 int main()
 {
 	float no1;
 	printf("enter any number:");
 	scanf("%f",&no1);
 	fprice(&no1);
 }
   void fprice(float* a)
 {
 	float price,discount,finalprice;
 	price=* a;
 	if(price>=2000)
 	 discount=0.20;
 	 else
 	 if(price>=1000)
 	 discount=0.10;
 	 else
 	 if(price>=500)
 	 discount=0.05;
 	 else
 	 discount=0.00;
 	 finalprice=price-(price*discount);
 	 printf("FINAL PRICE%f",finalprice);
 }
