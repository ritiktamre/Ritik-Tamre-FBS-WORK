#include<stdio.h>
#include<string.h>

typedef struct Distance
{
	int feet;
	int inch;
} Distance;

void main()
{
	Distance d;
	
	printf("ENTER FEET:");
	scanf("%d",&d.feet);
	printf("ENTER INCH:");
	scanf("%d",&d.inch);
	
	printf("\nFEET=%d INCH=%d",d.feet,d.inch);
}


