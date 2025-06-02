#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    char char_a_remplacer;
    char char_remplacement;

    fgets(chaine, sizeof(chaine), stdin);
    chaine[strcspn(chaine, "\n")] = 0; // Supprimer le caractère de nouvelle ligne

    scanf(" %c", &char_a_remplacer); // Notez l'espace avant %c pour consommer le potentiel newline précédent

    scanf(" %c", &char_remplacement); // Notez l'espace avant %c

    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == char_a_remplacer) {
            chaine[i] = char_remplacement;
        }
    }

    printf("Résultat : %s\n", chaine);

    return 0;
}