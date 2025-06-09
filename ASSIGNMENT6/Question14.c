#include<stdio.h>
 void evenOdd(int*);
 int main()
 {
 	int no1;
 	printf("enter any number:");
 	scanf("%d",&no1);
 	evenOdd(&no1);
 }
   void evenOdd(int *a)
 {
 	int num;
 	num=*a;
 	if(num%2==0)
 	 {
 		printf("NUMBER IS EVEN");
	 }
	 else
	 {
	 	printf("\nNUMBER IS ODD");
	 }
 }
