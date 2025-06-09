#include<stdio.h>
#include<string.h>

typedef struct product
{
	int id;
	char name[10];
	int quantity;
	int price;
}product ;

void main()
{
	product p;
	
	printf("ENTER ID:");
	scanf("%d",&p.id);
	printf("ENTER NAME:");
	scanf("%s",p.name);
	printf("ENTER QUANTITY:");
	scanf("%d",&p.quantity);
	printf("ENTER PRICE:");
	scanf("%d",&p.price);
	
	
	printf("ID=%d NAME=%s QUANTITY=%d PRICE=%d",p.id,p.name,p.quantity,p.price);
}
