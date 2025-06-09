#include<stdio.h>
 void alternate(int[]);
int main()
{
	int a[5],i;
	printf("enter the number:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	alternate(a);
}
 void alternate(int a[])
{
	int i;
	for(i=0;i<5;i+=2)
  {
	printf("ALTERNATE NUMBER=%d\n",a[i]);
   }
}
