#include<stdio.h>
 void digit(int*);
 int main()
 {
 	int no;
 	printf("enter any number:");
 	scanf("%d",&no);
 	digit(&no);
 }
  void digit(int* r)
 {
 	int num;
 	num=*r;
 	int a=num/100;
 	int q1=num%100;
 	int b=q1/10;
 	int c=q1%10;
 	int sum=a+b+c;
 	printf("ADDITION OF 3 N0=%d",sum);
 	printf("\nREVERSE=%d%d%d",c,b,a);
 }
