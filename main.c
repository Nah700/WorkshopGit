#include <stdio.h>

void display_result(int result)
{
    printf("The result of the sum is the number %d.\n", result);
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
}
