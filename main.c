#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int arr1[10];
    arr1[0] = 0;

    int i;
    for (i = 1; i < 10; i++)
    {
        arr1[i] = rand();
    }

    printf("Array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n\n");

    int arr2[10];
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    for (i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            ptr2[i] = ptr1[9 - i];
        }
        else
        {
            *(ptr2 + i) = *(ptr1 + (9 - i));
        }
    }

    printf("Array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n\n");
}