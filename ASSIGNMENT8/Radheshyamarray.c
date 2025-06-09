#include<stdio.h>
int main()
{
	int i,sum=0,a=10,b=3;
	 
	for(i=3;i<=6;i++)
	{
		int x=5;
		while(x>i)
		{
			sum=sum+a;
			a=b;
			b=sum+2;
			x--;
		}
	}
	printf("I=%d\n",i);
	printf("SUM=%d\n",sum);
	printf("A=%d\n",a);
	printf("B=%d\n",b);
}
