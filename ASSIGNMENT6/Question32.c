#include<stdio.h>
 void table(int*);
 int main()
   {
 	int no1;
 	printf("enter any number:");
 	scanf("%d",&no1);
 	 table(&no1);
    }
     void table(int* a) 
   {
 	int num;
 	num=* a;
 	int i=1,sum;
 	while(i<=10)
 	   {1
 		sum=num*i;
 		printf("%d\n",sum);
 		i++;
	    }
    }

