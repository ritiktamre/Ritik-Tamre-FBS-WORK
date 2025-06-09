///PRINT PRIME NUMBER IN THE GIVEN ARRAY 

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* a=(int*)malloc(sizeof(int) *5);
	int i,j,flag;
	
	printf("enter the number:");
	
	for(i=0;i<5;i++)
	
	scanf("%d",&a[i]);
	
	for(i=0;i<5;i++)
	{
		flag=0;
		
		for(j=2;j<a[i];j++)
	  {
		if(a[i]%j==0)
		flag=1;
		
      }
      if(flag==0)
       printf("\n%d",a[i]);
  }
      free(a);
      return 0;
}
