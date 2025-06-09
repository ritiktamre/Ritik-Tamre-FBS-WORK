#include<stdio.h>
#include<string.h>

typedef struct Time
{
	int hour;
	int min ;
	int sec;
}Time;

Time store(Time);
void display(Time);
void main()
{
	Time t1;
	t1=store(t1);
	display(t1);
}
Time store(Time t)
{
   printf("ENTER HOUR:");
   scanf("%d",&t.hour);
   printf("ENTER MINUTE:");
   scanf("%d",&t.min);
   printf("ENTER SECOND:");
   scanf("%d",&t.sec);
   
   return t;
}
 void display(Time t)
 {
 	printf("HOUR=%d ",t.hour);
 	printf("MINUTE=%d ",t.min);
 	printf("SECOND=%d ",t.sec);
 }
