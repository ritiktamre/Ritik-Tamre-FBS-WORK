///SUM OF THREE DIGIT AND REVERSE

#include<stdio.h>
 int main()
 {
 	int num;
 	
 	printf("ENTER THE NUMBER:");
 	scanf("%d",&num);
 	
 	int a=num/100;
 	int q1=num%100;
 	int b=q1/10;
 	int c=q1%10;
 	int sum=a+b+c;
 	printf("ADDITION OF 3 N0=%d",sum);
 	printf("\nREVERSE=%d%d%d",c,b,a);
 }
