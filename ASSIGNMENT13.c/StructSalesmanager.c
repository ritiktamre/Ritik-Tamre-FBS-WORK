#include<stdio.h>
#include<string.h>

typedef struct salesManager
{
	int id;
	char name[10];
	int salary;
	int incentive;
	int target;
}salesManager;

 salesManager store(salesManager);
 void display( salesManager);
void main()
{
	salesManager s1;
	s1=store(s1);
	display(s1);
}

salesManager store(salesManager s)
  {
  	 printf("ENTER ID:");
  	 scanf("%d",&s.id);
  	 printf("ENTER NAME:");
  	 scanf("%s",s.name);
  	 printf("ENTER SALARY");
  	 scanf("%d",&s.salary);
  	 printf("ENTER INCENTIVE:");
  	 scanf("%d",&s.incentive);
  	 printf("ENTER TARGET:");
  	 scanf("%d",&s.target);
  	 return s;
  }
void  display(salesManager s)
  {
  	printf("ID=%d ",s.id);
  	printf("NAME=%s ",s.name);
  	printf("SALARY=%d ",s.salary);
  	printf("INCENTIVE=%d ",s.incentive);
  	printf("TARGET=%d ",s.target);
  }
