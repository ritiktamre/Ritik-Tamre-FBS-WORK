///SORT ARRAY DESSENDING ORDER

#include<stdio.h>
void sort(int []);
int main()
{
	int a[5],i;
	printf("enter the number:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	sort(a);
}
 void sort(int a[])
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
	printf("%d\n",a[i]);
}
