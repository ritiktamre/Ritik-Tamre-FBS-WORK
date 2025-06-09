////PASS one structure variable to function by address


#include<stdio.h>
#include<string.h>

typedef struct student
{
	int rollno;
	char name[10];
	int marks;
	
}student;
void store(student*);
void display(student*);
 
 void main()
 {
 	student s1;
 	store(&s1);
 	display(&s1);
 }
 void store(student *s)
 {
 	printf("ENTER ROLLNO :");
 	scanf("%d",&s->rollno);
 	printf("ENTER NAME :");
 	scanf("%s",s->name);
 	printf("ENTER MARKS :");
 	scanf("%d",&s->marks);
 }
  void display(student*s)
  {
  	printf("Roll No is:%d ",s->rollno);
  	printf("Name is:%s ",s->name);
  	printf("Marks is:%d ",s->marks);
  }
 
