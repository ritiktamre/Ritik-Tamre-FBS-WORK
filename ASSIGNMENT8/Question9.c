//// REVERSE THE GIVEN NUMBER

#include<stdio.h>
void reverse(int[]);
int main()
{
	int a[5],i;
	printf("enter the number:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	reverse(a);
}
  void reverse(int a[])
{
    int i;
	for(i=4;i>=0;i--)
	printf("REVERSE NUMBER=%d\n",a[i]);
}
