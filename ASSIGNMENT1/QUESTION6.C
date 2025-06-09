///ELIGIBLE TO MARRY OR NOT

#include<stdio.h>
 int main()
 {
 	int male,female;
 	printf("enter the age:");
 	scanf("%d%d",&male,&female);
 	if(male>=21)
 	{
 		printf("MALE IS ELIGIBLE TO MARRY");
 }
 else 
 {
 	printf("MALE IS NOT ELIGIBLE TO MARRY");
 }
	
	 if(female>=18)
	 printf("\nFEMALE IS ELIGIBLE TO MARRY");
	 else
	 {
	 	printf("\nFEMALE IS NOT ELIGIBLE TO MARRY");
	 }
	 return 0;
 }
