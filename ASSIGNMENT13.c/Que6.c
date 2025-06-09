#include<stdio.h>
#include<string.h>

typedef struct Date
{
	int date;
	char month[10];
	int year;
	
	
} Date;

  void main()
  {
  	Date s1;
  	
  	printf("ENTER DATE:");
  	scanf("%d",&s1.date);
  	printf("ENTER MONTH:");
  	scanf("%s",s1.month);
  	printf("ENTER YEAR:");
  	scanf("%d",&s1.year);
  	
  	
  	printf("\nDATE=%d MONTH=%s YEAR=%d ",s1.date,s1.month,s1.year);
  	
  }
