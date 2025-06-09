////SECOND LARGEST AND SECOND SMALLEST NUMBER IN THE ARRAY

#include<stdio.h>
int main()
{
	int a[5],i,smallest2=0,largest2=0;
	printf("enter the number:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	int largest=a[0];
	int smallest=a[0];
	
	for(i=0;i<5;i++)
	{
		if(a[i]>largest)
		{
			largest2=largest;
			largest=a[i];
		}
		if(a[i]>largest2 && a[i]!=largest)
		{
			largest2=a[i];
		}
		if(a[i]<smallest)
		{
			smallest2=smallest;
			smallest=a[i];
		}
		if(a[i]<smallest2 && a[i]!=smallest)
		{
			smallest2=a[i];
		}
	}
	printf("SECOND LARGEST=%d",largest2);
	printf("\nSECOND SMALLEST=%d",smallest2);
}
