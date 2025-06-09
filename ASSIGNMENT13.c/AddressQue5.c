#include<stdio.h>
#include<string.h>

typedef struct SalesManager
{
	int id;
	char name[10];
	int salary;
	int incentive;
	int target;
	
}SalesManager;

 SalesManager store(SalesManager*);
 void display(SalesManager*);

void main()
{
	SalesManager s1;
	store(&s1);
	display(&s1);
}
 SalesManager store(SalesManager* s)
  {
  	printf("ENTER ID:");
  	scanf("%d",&s->id);
  	printf("ENTER NAME:");
  	scanf("%s",s->name);
  	printf("ENTER SALARY:");
  	scanf("%d",&s->salary);
  	printf("ENTER INCENTIVE:");
  	scanf("%d",&s->incentive);
  	printf("ENTER TARGET:");
  	scanf("%d",&s->target);
  }
 void display(SalesManager*s)
  {
  	printf("ID=%d ",s->id);
  	printf("NAME=%s ",s->name);
  	printf("SALARY=%d ",s->salary);
  	printf("INCENTIVE=%d ",s->incentive);
  	printf("TARGET=%d ",s->target);
  }
