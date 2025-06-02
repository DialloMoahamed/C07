#include <stdio.h>

int main() {
    char s1[100];
    char s2[100];
    int i = 0;
    int identiques = 1; // On suppose que les chaînes sont identiques

    // Lire les deux chaînes
    scanf("%s", s1); // Exemple : piscine
    scanf("%s", s2); // Exemple : piscine

    // Comparer caractère par caractère
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            identiques = 0; // Différence trouvée
            break;
        }
        i++;
    }

    // Affichage du résultat
    if (identiques) {
        printf("Les chaînes sont identiques.\n");
    } else {
        printf("Les chaînes sont différentes.\n");
    }

    return 0;
}
