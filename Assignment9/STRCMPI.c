////STRCMPI()

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char a[]="ritik";
	char b[]="RITIK";
	
	if(strcmpi(a,b)==0)
	 printf("STRING EQUAL");
	 else
	 printf("STRING NOT EQUAL");
}
