#include<stdio.h>
#include<string.h>

typedef struct Admin
{
	int id;
	char name[10];
	float salary;
	int allowance;
}Admin;

Admin store(Admin);
void display(Admin);

void main()
{
	Admin a1;
	a1=store(a1);
	display(a1);
}
 Admin store(Admin a)
{
	printf("ENTER ID:");
	scanf("%d",&a.id);
	printf("ENTER NAME:");
	scanf("%s",a.name);
	printf("ENTER SALARY:");
	scanf("%f",&a.salary);
	printf("ENTER ALLOWANCE:");
	scanf("%d",&a.allowance);
	return a;
}
void display(Admin a)
{
	printf("ID=%d ",a.id);
	printf("NAME=%s ",a.name);
	printf("SALARY=%f ",a.salary);
	printf("ALLOWANCE=%d",a.allowance);
}

