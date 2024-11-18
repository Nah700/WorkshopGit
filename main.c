#include <stdio.h>

void display_result(int result)
{
    printf("The result of the sum is %d.\n", result);
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

    transform_numbers(&a, &b);
    // Ajouter une fonction qui effectue plusieurs opérations sur les deux variables prototyper de la sorte:
    // void transform_numbers(int *a, int *b);
    // L'appeler ici à la place de ce commentaire
    display_result(a + b);
    return 0;
}
