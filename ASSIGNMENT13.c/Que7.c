#include<stdio.h>
#include<string.h>

typedef struct Time
{
	int hour;
	int min;
	int sec;
} Time;
  void main()
{
    Time s1;
	printf("ENTER HOUR:");
	scanf("%d",&s1.hour);
	printf("ENTER MINUTES:");
	scanf("%d",&s1.min);
	printf("ENTER SECOND");
	scanf("%d",&s1.sec);
	
	printf("\nHOUR=%d MINUTE=%d SECOND=%d",s1.hour,s1.min,s1.sec);
}

