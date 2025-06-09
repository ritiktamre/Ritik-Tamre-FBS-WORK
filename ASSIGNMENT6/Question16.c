#include<stdio.h>
 void gender(int*,int*);
 int main()
 {
 	int no1,no2;
 	printf("enter any number:");
 	scanf("%d%d",&no1,&no2);
 	gender(&no1,&no2);
 }
  void gender(int* a,int* b)
 {
 	int maleage;
 	maleage=* a;
 	if(maleage>=21)
 	printf("MALE IS ELIGIBLE TO MARRY");
 	
    else 
 	printf("\nMALE IS NOT ELIGIBLE TO MARRY");

	 int femaleage;
	 femaleage=* b;
	 if(femaleage>=18)
	 printf("\nFEMALE IS ELIGIBLE TO MARRY");
	 else
	 printf("\nFEMALE IS NOT ELIGIBLE TO MARRY");
	 
 }
