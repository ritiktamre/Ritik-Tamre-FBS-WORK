#include<stdio.h>
#include<string.h>

typedef struct Product
{
	int id;
	char name[10];
	int quantity;
	int price;
}Product;

 Product store(Product);
 void display(Product);

void main()
{
	Product p1;
	p1=store(p1);
	display(p1);
}

  Product store(Product p)
{
	printf("ENTER ID:");
	scanf("%d",&p.id);
	printf("ENTER NAME:");
	scanf("%s",p.name);
	printf("ENTER QUANTITY:");
	scanf("%d",&p.quantity);
	printf("ENTER PRICE:");
	scanf("%d",&p.price);
	
	return p;
}
 void display(Product p)
   {
   	printf("ID=%d ",p.id);
   	printf("NAME=%s ",p.name);
   	printf("QUANTITY=%d ",p.quantity);
   	printf("PRICE=%d ",p.price);
   }


