#include <stdio.h>

void display_result(int result)
{
    printf("The result of the sum is %d.\n", result);
}

void transform_numbers(int *a, int *b)
{
    a[0] = (*a + *a) - *a;
    b[0] = (*b + *b) - *b;
}

int main(void)
{
    int a = 5;
    int b = 15;

    // Ajouter une fonction qui effectue plusieurs opérations sur les deux variables prototyper de la sorte:
    // void transform_numbers(int *a, int *b);
    // L'appeler ici à la place de ce commentaire
    transform_numbers(&a, &b);
    display_result(transform_numbers);
    return 0;
}