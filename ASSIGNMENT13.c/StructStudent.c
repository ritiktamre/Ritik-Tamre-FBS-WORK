#include<stdio.h>
#include<string.h>

typedef struct Student
{
	int rollNo;
	char name[10];
	int marks;
}Student;

Student store(Student);
void display(Student);

void main()
{
	Student s1;
	s1=store(s1);
	display(s1);
}
Student store(Student s)
{
	printf("ENTER ROLLNO:");
	scanf("%d",&s.rollNo);
	printf("ENTER NAME:");
	scanf("%s",&s.name);
	printf("ENTER MARKS:");
	scanf("%d",&s.marks);
	
	return s;
}
void display(Student s)
{
	printf("ROLLNO=%d ",s.rollNo);
	printf("NAME=%s ",s.name);
	printf("MARKS=%d ",s.marks);
}

