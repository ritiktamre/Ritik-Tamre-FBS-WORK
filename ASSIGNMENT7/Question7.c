////TAKE TWO ARRAY AND SUM IN THIRD ARRAY

#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={10,20,30,40,50};
	int c[5],i;
	 
	 for(i=0;i<5;i++)
	 c[i]=a[i]+b[i];
	 
	 for(i=0;i<5;i++)
	 printf("c[i]=%d\n",c[i]);
}
