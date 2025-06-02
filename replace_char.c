#include <stdio.h>

int main() {
    char chaine[100];
    char a_remplacer, remplacement;
    int i = 0;

    // Lire la chaîne + 2 caractères (à remplacer, puis de remplacement)
    scanf("%s %c %c", chaine, &a_remplacer, &remplacement);

    // Parcourir la chaîne
    while (chaine[i] != '\0') {
        if (chaine[i] == a_remplacer) {
            chaine[i] = remplacement; // Remplacer si égal au caractère cible
        }
        i++;
    }

    // Affichage du résultat
    printf("Résultat : %s\n", chaine);

    return 0;
}