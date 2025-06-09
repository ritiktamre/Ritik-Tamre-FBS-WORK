#include<stdio.h>
void range(int*);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	  range(&no1);
}
  void range(int* r)
{
	int a,sum=0;
	a=r;
	while(a<=10)
	{
		sum=sum+a;
		printf("SUM OF NUMBER=%d\n",sum);
		a++;
	}
}
