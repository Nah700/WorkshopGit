#include <stdio.h>

void display_result(int result)
{
    printf("The result of the sum is the number %d.\n", result);
}

void transform_numbers(int a, int b)
{
    if (a != b)
        a *= b;
    printf("%d, \n", a);
}

int main(void)
{
    int a = 5;
    int b = 15;
    // Ajouter une fonction qui effectue plusieurs opérations sur les deux variables prototyper de la sorte:

    // L'appeler ici à la place de ce commentaire
    transform_numbers(a, b);
    display_result(a + b);
}
