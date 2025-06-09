#include<stdio.h>
#include<string.h>

typedef struct Complex
{
	int real;
	int imaginary;
	
}Complex;
 
 Complex store(Complex);
 void display(Complex);
 
void main()
{
	Complex c1;
	c1=store(c1);
	display(c1);
}
  Complex store(Complex c)
   {
   	printf("ENTER REAL:");
   	scanf("%d",&c.real);
   	printf("ENTER IMAGINARY:");
   	scanf("%d",&c.imaginary);
   	
   	return c;
   }
 void display(Complex c)
   {
   	printf("REAL=%d ",c.real);
   	printf("IMAGINARY=%d",c.imaginary);
   }

