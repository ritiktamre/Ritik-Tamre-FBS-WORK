#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int *a = (int*)malloc(sizeof(int) * 5);  
    int i;

    printf("Enter the array elements:");
    for(i = 0; i < 5; i++)
	 {
        scanf("%d", &a[i]);
     }

    int max = a[0];
    int min = a[0];

    for(i = 1; i < 5; i++)  
	{
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    printf("MAXIMUM VALUE = %d\n", max);
    printf("MINIMUM VALUE = %d\n", min);

    free(a);
	
    return 0;
}

