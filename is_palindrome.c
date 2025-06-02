#include <stdio.h>

int main() {
    char chaine[100];
    int debut = 0;
    int fin = 0;
    int est_palindrome = 1;  // On suppose que c'est un palindrome

    // Lire la chaîne sans espaces
    scanf("%s", chaine);

    // Trouver la longueur manuellement (sans strlen)
    while (chaine[fin] != '\0') {
        fin++;
    }
    fin--; // Placer fin sur le dernier caractère (pas sur '\0')

    // Comparaison avec deux index : debut → ← fin
    while (debut < fin) {
        if (chaine[debut] != chaine[fin]) {
            est_palindrome = 0; // Pas identique
            break;
        }
        debut++;
        fin--;
    }

    // Affichage du résultat
    if (est_palindrome) {
        printf("La chaîne est un palindrome.\n");
    } else {
        printf("La chaîne n'est pas un palindrome.\n");
    }

    return 0;
}
