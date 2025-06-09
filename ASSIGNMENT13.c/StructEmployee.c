////PASS BY VALUE

#include<stdio.h>
#include<string.h>

typedef struct Employee
{
	int id;
	char name[10];
	float salary;
}Employee;

Employee store(Employee);
void display(Employee);

void main()
{
	Employee e1;
	e1=store(e1);
	display(e1);
}
Employee store(Employee e)
{
	printf("ENTER ID:");
	scanf("%d",&e.id);
	printf("ENTER NAME:");
	scanf("%s",&e.name);
	printf("ENTER SALARY:");
	scanf("%f",&e.salary);
	
	return e;
}
void display(Employee e)
{
	printf("ID=%d ",e.id);
	printf("NAME=%s ",e.name);
	printf("SALARY=%f ",e.salary);
}


