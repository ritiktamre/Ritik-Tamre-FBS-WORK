#include<stdio.h>
#include<string.h>

typedef struct Admin
{
	int id;
	char name[20];
	int salary;
}Admin;

void store(Admin* a);
void display(Admin* a);

void main()
{
	Admin a1;
	store(&a1);
	display(&a1);
	
}

   void store(Admin* a)
    {
    	printf("Enter the ID:");
    	scanf("%d",&a->id);
    	
    	printf("Enter the Name:");
    	scanf("%s",a->name);
    	
    	printf("Enter the salary:");
    	scanf("%d",&a->salary);
    	
    	
	}
	
	void display(Admin* a)
	{
		printf("ID=%d ",a->id);
		printf("NAME=%s ",a->name);
		printf("SALARY=%d ",a->salary);
	}
