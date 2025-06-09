///STR STR()


#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	char a[]="I AM A BOY";
	char b[]="AM";
	
	if(strstr(a,b)!=NULL)
	printf("STRING FOUND");
	else
	printf("STRING NOT FOUND");
}
