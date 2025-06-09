///PRINT GREATEST NUMBER OF NESTED IF ELSE

#include<stdio.h>
 int main()
 {
 	int a,b,c;
 	
 	printf("enter the number:");
 	scanf("%d%d%d",&a,&b,&c);
 	
 	if(a>=b)
 	{
 		if(a>=c)
 		printf("a is greater=%d",a);
 		else 
 		printf("c is greater=%d",c);
	 }
	 else
	 {
	 	if(b>=c)
	 	printf("b is greater=%d",b);
	 	else
	 	printf("c is greater=%d",c);
	 }
 }
