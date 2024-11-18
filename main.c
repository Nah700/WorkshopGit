#include <stdio.h>

void display_result(int result)
{
    printf("The result of the sum is the number %d.\n", result);
}

int main(void)
{
    int ah_jadore_ce_nombre = 5000;
    int b = 15;

    // Ajouter une fonction qui effectue plusieurs opérations sur les deux variables prototyper de la sorte:
    // void transform_numbers(int *a, int *b);
    // L'appeler ici à la place de ce commentaire
    display_result(ah_jadore_ce_nombre + b);
    dprintf(1, "It work !\n");
    return 0;
}