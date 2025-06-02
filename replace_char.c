#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256

int main() {
    char input[MAX_LENGTH];
    char chaine[MAX_LENGTH];
    char car_a_remplacer, car_de_remplacement;

    // Lire toute la ligne
    fgets(input, MAX_LENGTH, stdin);

    // Extraire la chaîne et les caractères avec sscanf
    sscanf(input, "%s %c %c", chaine, &car_a_remplacer, &car_de_remplacement);

    // Remplacer les caractères dans la chaîne
    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == car_a_remplacer) {
            chaine[i] = car_de_remplacement;
        }
    }

    // Afficher le résultat
    printf("Résultat : %s\n", chaine);

    return 0;
}
