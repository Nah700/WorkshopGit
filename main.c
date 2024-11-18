#include <stdio.h>

void transform_numbers(int *a, int *b)
{
    if (a == NULL || b == NULL) {
        return;
    }
    *a += *b;         
    *b = *a - *b;     
    *a -= *b;                  
}

void display_result(int result)
{
    printf("The result of the sum is %d.\n", result);
}

