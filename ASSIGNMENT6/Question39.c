#include<stdio.h>
void polindrome(int*);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	polindrome(&no1);
}
  void polindrome(int* a)
{
  int n,r,sum=0;
  n=* a;
  int temp=n;
  while(n>0)
  {
  	r=n%10;
  	sum=r+(sum*10);
  	n=n/10;
  }
  if(temp==sum)
  printf("no is polindrome");
  else
  printf("no is not polindrome");
}
