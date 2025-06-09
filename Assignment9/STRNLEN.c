////STRNLEN()

#include<stdio.h>
#include<string.h>
#include<conio.h>


int main()
{
   char a[]="FIRST BIT SOLUTION";
   
        int res=strnlen(a,10);
		
		printf("%d",res);	
}
