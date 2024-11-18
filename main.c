#include <stdio.h>

void display_result(int result)
{
    printf("The result of the sum is %d.\n", result);
}

int transform_numbers(int a, int b)
{
        return (a + b);
}

int main(void)
{
    int a = 5;
    int b = 15;
    int c = transform_numbers(a,b);

    display_result(c);
    return (0);
}