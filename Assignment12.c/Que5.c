////PRINT ALTERNATE NUMBER IN THE ARRAY

#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int* a=(int*)malloc(sizeof(int) *5);
	int i;
	
	printf("enter the array element:");
	
	for(i=0;i<5;i++)
  {
	scanf("%d",&a[i]);
  }
  
  
	for(i=0;i<5;i+=2)
  {
	printf("ALTERNATE NUMBER=%d\n",a[i]);
   }
   free(a);
   
   return 0;
}
