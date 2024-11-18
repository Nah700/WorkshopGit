#include <stdio.h>

void display_result(int result)
{
    printf("The result of the sum is the number %d.\n", result);
}

int transform_numbers(int a, int b)
{
        return (a + b);
}

void transform_number(int *a, int*b)
{
    a[0] = (*a + *b) * *a;
    b[0] = (*b + *a) * *b;
}

int main(void)
{
    int a = 5;
    int b = 15;

    transform_number(&a, &b);
    display_result(a + b);
    return 0;
}