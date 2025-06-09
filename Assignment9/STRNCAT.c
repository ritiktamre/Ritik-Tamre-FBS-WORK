////STRNCAT()

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	char a[]="radhe";
	char b[]="krishna";
	
	strncat(a,b,6);
	printf("%s",a);
}
