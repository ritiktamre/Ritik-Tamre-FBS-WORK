#include<stdio.h>
void sum(int[],int[]);
int main()
{
  int a[5]={1,2,3,4,5};
  int b[5]={10,20,30,40,50};
	sum(a,b);
}
  void sum(int a[],int b[])
{
	int c[5],i;
	 
	 for(i=0;i<5;i++)
	 c[i]=a[i]+b[i];
	 
	 for(i=0;i<5;i++)
	 printf("c[i]=%d\n",c[i]);
}
