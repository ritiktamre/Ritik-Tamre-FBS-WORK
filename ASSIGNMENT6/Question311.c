#include<stdio.h>
 void rev(int*);
 int main()
 {
 	int no1;
 	printf("enter any number:");
 	scanf("%d",&no1);
 	rev(&no1);
 }
   void rev(int* a)
 {
 	int n,r;
 	n=* a;
 	
 	while(n>0)
 	{
 		r=n%10;
 		printf("%d",r);
 		n=n/10;
 		
	 }
 }
