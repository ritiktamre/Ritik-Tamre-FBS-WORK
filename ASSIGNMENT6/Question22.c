#include<stdio.h>
 void greater(int*,int*,int*);
 int main()
 {
 	int no1,no2,no3;
 	printf("enter any number:");
 	scanf("%d%d%d",&no1,&no2,&no3);
 	 greater(&no1,&no2,&no3);
 }
  void greater(int* p,int* q,int* r)
 {
 	int a,b,c;
 	a=* p;
 	b=* q;
 	c=* r;
 	if(a>=b)
 	{
 		if(a>=c)
 		printf("a is greater=%d",a);
 		else 
 		printf("c is greater=%d",c);
	 }
	 else
	 {
	 	if(b>=c)
	 	printf("b is greater=%d",b);
	 	else
	 	printf("c is greater=%d",c);
	 }
 }
