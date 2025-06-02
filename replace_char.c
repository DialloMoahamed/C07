#include <stdio.h>

int main() {
    char chaine[100];
    char car_a_remplacer, car_de_remplacement;
    int i;

    // Lire la chaîne + les deux caractères sur une seule ligne
    scanf("%s %c %c", chaine, &car_a_remplacer, &car_de_remplacement);

    // Remplacement
    for (i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == car_a_remplacer) {
            chaine[i] = car_de_remplacement;
        }
    }

    // Affichage exactement conforme
    printf("Résultat : %s\n", chaine);

    return 0;
}
