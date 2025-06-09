#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "I AM A BOY";
    char b[] = "AM";

    
    if (strnstr(a, b,1)= NULL)
        printf("STRING FOUND\n");
    else
        printf("STRING NOT FOUND\n");

    return 0;
}

