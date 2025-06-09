#include<stdio.h>
#include<string.h>

typedef struct Employee
{
	int id;
	char name[10];
	int salary;
	
} Employee;

  void main()
  {
  	Employee s1;
  	
  	s1.id=101;
  	strcpy(s1.name,"ritik");
  	s1.salary=25000;
  	
  	
  	printf("\nID=%d NAME=%s SALARY=%d",s1.id,s1.name,s1.salary);
  	
  }
