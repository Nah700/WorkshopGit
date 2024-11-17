#include <stdio.h>

void display_result(int result)
{
    printf("The result of the sum is %d.\n", result);
}

int main(void)
{
    int a = 5;
    int b = 15;

    // Ajouter une fonction qui effectue plusieurs opérations sur les deux variables prototyper de la sorte:
    // void transform_numbers(int *a, int *b);
    // L'appeler ici à la place de ce commentaire
    display_result(a + b);
    return 0;
}