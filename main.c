#include <stdio.h>

void display_result(int result)
{
    printf("The result of the sum is %d.\n", result);
}

void transform_number(int *a, int*b)
{
    *a += 4;
    *b = *a * 4;
}

void transform_numbers(int *a, int *b)
{
    *a += 4;
    *b = *a + 4;
}

int main(void)
{
    int a = 5;
    int b = 15;

    transform_number(&a, &b);
    display_result(a + b);
    display_result(ah_jadore_ce_nombre + b);
    dprintf(1, "It works !\n");
    return 0;
}
