#include <stdio.h>

void display_result(int result)
{
    printf("The result of the sum is the number %d.\n", result);
}

<<<<<<< HEAD
void transform_numbers(int a, int b)
{
    if (a != b)
        a *= b;
    printf("%d, \n", a);
=======
void transform_numbers(int *a, int *b)
{
    *a = *a * 2;
    *b = *b + 3;
>>>>>>> 059f1201c2a6eba9f057865e7cbdf28410b4dac3
}

int main(void)
{
    int a = 3;
    int ah_jadore_ce_nombre = 5000;
    int b = 15;

    // Ajouter une fonction qui effectue plusieurs opérations sur les deux variables prototyper de la sorte:
    // void transform_numbers(int *a, int *b);
<<<<<<< HEAD
    // L'appeler ici à la place de ce commentaire
<<<<<<< HEAD
    transform_numbers(a, b);
    display_result(a + b);
=======
=======
    transform_numbers(&a, &b);
    display_result(a + b);
>>>>>>> 059f1201c2a6eba9f057865e7cbdf28410b4dac3
    display_result(ah_jadore_ce_nombre + b);
    dprintf(1, "It work !\n");
>>>>>>> f445889fe605995f558fdec9ff2bb5af8e45c249
    return 0;
}
