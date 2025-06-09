#include<stdio.h>
#include<string.h>

typedef struct Distance
{
	int feet;
	int inch;
}Distance;

Distance store(Distance);
void display(Distance);

void main()
{
	Distance d1;
	d1=store(d1);
	display(d1);
}

 Distance store(Distance d)
   {
   	printf("ENTER FEET:");
   	scanf("%d",&d.feet);
   	printf("ENTER INCH:");
   	scanf("%d",&d.inch);
   	
   	return d;
   }
void display(Distance d)
   {
   	printf("FEET=%d",d.feet);
   	printf("INCH=%d",d.inch);
   }
   
