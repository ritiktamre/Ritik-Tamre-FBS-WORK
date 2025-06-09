////PRINT ALTERNATE NUMBER IN THE ARRAY

#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter the array element:");
	for(i=0;i<5;i++)
  {
	scanf("%d",&a[i]);
  }
	for(i=0;i<5;i+=2)
  {
	printf("ALTERNATE NUMBER=%d\n",a[i]);
   }
}
