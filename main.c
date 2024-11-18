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
    int ah_jadore_ce_nombre = 5000;
    int b = 15;

    // Ajouter une fonction qui effectue plusieurs opérations sur les deux variables prototyper de la sorte:
    // void transform_numbers(int *a, int *b);
    // L'appeler ici à la place de ce commentaire
<<<<<<< HEAD
    transform_numbers(a, b);
    display_result(a + b);
=======
    display_result(ah_jadore_ce_nombre + b);
    dprintf(1, "It work !\n");
>>>>>>> f445889fe605995f558fdec9ff2bb5af8e45c249
    return 0;
}
