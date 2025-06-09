#include<stdio.h>
 void fabonacci(int*,int*,int*);
int main()
{
	int no1,no2,no3;
	printf("enter any number:");
	scanf("%d%d%d",&no1,&no2,&no3);
	fabonacci(&no1,&no2,&no3);
}
   void fabonacci(int* r,int* s,int* t)
{
	int n,a,b,c,i;
	n=* r;
	a=* s;
	b=* t;
	
	for(i=1;i<=n;i++)
  { 
	printf("%d\n",a);
	c=a+b;
	a=b;
	b=c;		
   }
}
