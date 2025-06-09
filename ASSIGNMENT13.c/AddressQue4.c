#include<stdio.h>
#include<string.h>

typedef struct HR
{
	int id;
	char name[10];
	int salary;
	int commision;
	
}HR;

 HR store(HR*);
 void display(HR*);

void main()
{
	HR h1;
	store(&h1);
	display(&h1);
}
 HR store(HR* h)
  {
  	printf("ENTER ID:");
  	scanf("%d",&h->id);
  	printf("ENTER NAME:");
  	scanf("%s",h->name);
  	printf("ENTER SALARY:");
  	scanf("%d",&h->salary);
  	printf("EMTER COMMISION:");
  	scanf("%d",&h->commision);
  }
 void display(HR*h)
  {
  	printf("ID=%d ",h->id);
  	printf("NAME=%s ",h->name);
  	printf("SALARY=%d ",h->salary);
  	printf("COMMISION=%d ",h->commision);
  }
