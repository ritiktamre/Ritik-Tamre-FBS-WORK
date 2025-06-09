////REVERSE ARRAY IS USING MALLOC

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int*a=(int*)malloc(sizeof(int) *5);
	int i;
	
	printf("enter the array element:");
	for(i=0;i<=4;i++)
	scanf("%d",&a[i]);
	
	for(i=4;i>=0;i--)
	printf("REVERSE NUMBER=%d\n",a[i]);
	
	free(a);
	
	return 0;
}
