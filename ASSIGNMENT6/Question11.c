#include<stdio.h>
 void temp(int*);
 int main()
 {
 	int no1;
 	printf("enter any number:");
 	scanf("%d",&no1);
 	temp(&no1);
 }
  void temp(int *a)
 {
 	int f,c;
 	c=* a;
 	f=(c*5/9)+32;
 	printf("%d",f);
 }
