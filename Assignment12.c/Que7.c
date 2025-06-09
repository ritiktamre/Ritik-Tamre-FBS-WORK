////TAKE TWO ARRAY AND SUM IN THIRD ARRAY

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* a=(int*)malloc(sizeof(int) *5);
	int* b=(int*)malloc(sizeof(int) *5);
	int* c=(int*)malloc(sizeof(int) *5);
	int i;
	
	printf("ENTER THE NUMBER:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	printf("ENTER THE NUMBER:");
	for(i=0;i<5;i++)
	scanf("%d",&b[i]);
	 
	 for(i=0;i<5;i++)
	 c[i]=a[i]+b[i];
	 
	 for(i=0;i<5;i++)
	 {
	   printf("c[i]=%d\n",c[i]);
     
	 }
	 
	 free(a);
	 free(b);
	 free(c);
	 
	 return 0;
}
