#include<stdio.h>

typedef struct student
{
	int rollNo;
	char name[10];
	int marks;
	
} student;

void main()
{
	student s1;
	s1.rollNo=101;
    strcpy(s1.name,"ritik");
	s1.marks=85;
	
	printf("ROLLN0=%d NAME=%s MARKS=%d",s1.rollNo,s1.name,s1.marks);
	
}


