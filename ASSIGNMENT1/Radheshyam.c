#include<stdio.h>
void dess(int a[]);
int main()
{
	int a[5],i;
	printf("Enter the number:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	dess(a);
}
  void dess(int a[])
{
	int i,j,temp;

	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
}
