#include<stdio.h>
 void fst(int*);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	fst(&no1);
}
  void fst(int* a)
{
	int num,first,last,sum;
	 num=* a;
	last=num%10;
	
	while(num>10)
	{
		num=num/10;
		first=num;
		sum=first+last;
	}
	printf("%d\n%d\n%d",first,last,sum);
}
