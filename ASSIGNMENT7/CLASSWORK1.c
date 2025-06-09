#include<stdio.h>

typedef struct student
{
	int rollNo;
	char name[10];
	int marks;

}Student;

void main()
{
	Student s1,s2;
	s1.rollNo=101;
	strcpy(s1.name,"ritik");
	s1.marks=85;
	
	printf("enter rollNo,name and marks");
	scanf("%d",&s2.rollNo);
	scanf("%s",s2.name);
	scanf("%d",&s2.marks);
	
	printf("ROLLNO=%d NAME=%s MARKS=%d",s1.rollNo,s1.name,s1.marks);
	printf("\nROLLNO=%d NAME=%s MARKS=%d",s2.rollNo,s2.name,s2.marks);

}

