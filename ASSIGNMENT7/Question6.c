///PRIME NUMBER

#include<stdio.h>
int main()
{
	int a[5],i,j,flag;
	printf("enter the number:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<5;i++)
	{
		flag=0;
		for(j=2;j<a[i];j++)
	  {
		if(a[i]%j==0)
		flag=1;
      }
      if(flag==0)
       printf("%d",a[i]);
  }
  
}
