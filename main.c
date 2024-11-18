#include <stdio.h>

void display_result(int result)
{
    printf("The result of the sum is %d.\n", result);
}

void transform_numbers(int a, int b)
{
<<<<<<< HEAD
    if (a != b)
        a *= b;
    printf("%d, \n", a);
=======
    *a += 4;
    *b = *a * 4;
>>>>>>> db699a50db01626ec49edda580bf045fd1418ba3
}

int main(void)
{
    int a = 5;
    int b = 15;
    // Ajouter une fonction qui effectue plusieurs opérations sur les deux variables prototyper de la sorte:

    // L'appeler ici à la place de ce commentaire
    transform_numbers(a, b);
    display_result(a + b);
<<<<<<< HEAD

=======
    display_result(ah_jadore_ce_nombre + b);
    dprintf(1, "It works !\n");
>>>>>>> db699a50db01626ec49edda580bf045fd1418ba3
    return 0;
}
