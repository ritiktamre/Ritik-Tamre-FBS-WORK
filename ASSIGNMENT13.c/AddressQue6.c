#include<stdio.h>
#include<string.h>

typedef struct Date
{
	int date;
	int month;
	int year;
	
}Date;

 Date store(Date*);
 void display(Date*);

void main()
{
	Date d1;
	store(&d1);
	display(&d1);
}
 Date store(Date* d)
  {
  	printf("ENTER DATE:");
  	scanf("%d",&d->date);
  	printf("ENTER MONTH:");
  	scanf("%d",&d->month);
  	printf("ENTER YEAR:");
  	scanf("%d",&d->year);
  	
  }
 void display(Date*d)
  {
  	printf("DATE=%d ",d->date);
  	printf("MONTH=%d ",d->month);
  	printf("YEAR=%d ",d->year);
  
  }
