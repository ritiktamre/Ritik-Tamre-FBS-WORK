#include<stdio.h>
void prime(int* a);
int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	prime(&a);

}
  void prime(int* a)
{
	int num, i,count=0;
	num=* a;
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
	printf("NO is prime");
	}
	else
	{
     printf("NO is not prime");
	}
}
