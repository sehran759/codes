#include <stdio.h>

int main()
 {
    int i;

    printf("Natural numbers from 100 to 1 are:\n");

    for (i = 100; i >= 1; i--) 
	{
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}

