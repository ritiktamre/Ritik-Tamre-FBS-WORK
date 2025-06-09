////PRINT TABLE FOR THE GIVEN NUMBER

#include<stdio.h>
 int main()
 {
 	int num;
 	int i=1,sum;
 	
 	printf("enter the number:");
 	scanf("%d",&num);
 	
 	
 	while(i<=10)
 	{
 		sum=num*i;
 		printf("%d\n",sum);
 		i++;
	 }
 }

