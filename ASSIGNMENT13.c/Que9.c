#include<stdio.h>
#include<string.h>

typedef struct Complex
{
	int real;
	int imaginary;
	
}Complex;

void main()
{
	Complex c;
	printf("ENTER REAL:");
	scanf("%d",&c.real);
	printf("ENTER IMAGINARY:");
	scanf("%d",&c.imaginary);
	
	printf("\nReal=%d Imaginary=%d",c.real,c.imaginary);
}
