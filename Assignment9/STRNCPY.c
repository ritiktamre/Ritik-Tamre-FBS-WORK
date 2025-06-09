////STRNCPY()

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	char a[10]="ritik";
	char b[10];
	
	strncpy(b,a,4);
	
	printf("%s",b);
}
