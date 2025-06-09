////NUMBER EVEN OR ODD PRINT IN THE GIVEN ARRAY


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* a=(int*)malloc(sizeof(int) *5);
	int i;
	
	printf("enter the array element:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		printf("\nNUM IS EVEN");
		else
		printf("\nNUM IS ODD");
		
		
	}
	  free(a);
	  return 0;
}
