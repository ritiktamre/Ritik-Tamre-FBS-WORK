#include<stdio.h>
#include<string.h>

typedef struct Employee
{
	int id;
	char name[10];
	int salary;
}Employee;

Employee store(Employee*);
void display(Employee*);
void main()
{
	Employee e1;
	store(&e1);
	display(&e1);
}

  Employee store(Employee* e)
{
	printf("ENTER ID:");
	scanf("%d",&e->id);
	printf("ENTER NAME:");
	scanf("%s",e->name);
	printf("ENTER SALARY:");
	scanf("%d",&e->salary);
}
   void display(Employee* e)
    {
    	printf("ID=%d ",e->id);
    	printf("NAME=%s ",e->name);
    	printf("SALARY=%d ",e->salary);
	}
