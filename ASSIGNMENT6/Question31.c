#include<stdio.h>
void sum(int*);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	 sum(&no1);
}
 void sum(int* a)
{
	int i;
	i=* a;
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
	
}
