#include<stdio.h>
#include<string.h>

typedef struct Admin
{
	int id;
	char name[10];
	int salary;
	int allowance;
	
} Admin;

  void main()
  {
  	Admin s1;
  	
  	s1.id=101;
  	strcpy(s1.name,"ritik");
  	s1.salary=25000;
  	s1.allowance=5500;
  	
  	printf("\nID=%d NAME=%s SALARY=%d ALLOWANCE=%d",s1.id,s1.name,s1.salary,s1.allowance);
  	
  }
