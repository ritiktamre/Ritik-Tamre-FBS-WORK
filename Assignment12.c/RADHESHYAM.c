#include<stdio.h>
#include<string.h>

typedef struct Complex
{
	int real;
	int imaginary;
}Complex;

void store(Complex*);
void display(Complex*);


void main()
{
	Complex c1;
	store(&c1);
	display(&c1);
}
  void store(Complex *c)
   {
   	printf("ENTER REAL:");
   	scanf("%d",&c->real);
   	printf("ENTER IMAGINARY:");
   	scanf("%d",&c->imaginary);
   }
   
   void display(Complex *c)
   {
   	printf("REAL=%d ",c->real);
   	printf("IMAGINARY=%d ",c->imaginary);
   }
