#include<stdio.h>
#include<string.h>

typedef struct student
{
	int rollNo;
	char name[10];
	int marks;
	
} student;

  void main()
  {
  	student s;
  	
  	printf("ENTER THE ROLLNO:");
  	scanf("%d",&s.rollNo);
  	
  	printf("ENTER THE NAME:");
  	scanf("%s",s.name);
  	
  	printf("ENTER THE MARKS:");
  	scanf("%d",&s.marks);
  	
  	
  	printf("\nROLLNO=%d NAME=%s MARKS=%d",s.rollNo,s.name,s.marks);
  	
  }
