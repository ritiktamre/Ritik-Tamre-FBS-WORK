#include<stdio.h>
#include<string.h>

typedef struct SalesManager
{
	int id;
	char name[10];
	int salary;
	int incentive;
	int target;
	
} SalesManager;

  void main()
  {
  	SalesManager s1;
  	
  	s1.id=101;
  	strcpy(s1.name,"ritik");
  	s1.salary=504;
  	s1.incentive=2000;
  	s1.target=5;
  	
  	
  	printf("\nID=%d NAME=%s SALARY=%d INCENTIVE=%d TARGET=%d",s1.id,s1.name,s1.salary,s1.incentive,s1.target);
  	
  }
  
  
