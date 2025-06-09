#include<stdio.h>

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
  	printf("ENTER THE ID:");
  	scanf("%d",&a->id);
  	
  	printf("ENTER THE NAME:");
  	scanf("%s",a->name);
  	
  	printf("ENTER THE SALARY:");
  	scanf("%d",&a->salary);
  }
  
  void display(Admin* a)
  {
  	printf("ID=%d",a->id);
  	printf("NAME=%s",a->name);
  	printf("SALARY=%d",a->salary);
  }
