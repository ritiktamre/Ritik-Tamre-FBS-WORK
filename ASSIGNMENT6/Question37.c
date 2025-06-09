#include<stdio.h>
 void factorial(int*);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	 factorial(&no1);
}
  void factorial(int* a)
{
	int n,i,fact=1;
	n=* a;
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("FACTORIAL%d",fact);
}
