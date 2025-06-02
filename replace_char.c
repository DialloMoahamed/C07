#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256

int main() {
    char chaine[MAX_LENGTH];
    char car_a_remplacer, car_de_remplacement;

    // Demander à l'utilisateur d'entrer la chaîne
    fgets(chaine, MAX_LENGTH, stdin);
    chaine[strcspn(chaine, "\n")] = 0; // Supprimer le caractère de fin de ligne

    // Demander à l'utilisateur d'entrer le caractère à remplacer et le caractère de remplacement
    scanf(" %c", &car_a_remplacer); // Notez le espace avant %c pour consommer des caractères en excès
    scanf(" %c", &car_de_remplacement);

    // Parcourir la chaîne et remplacer les caractères
    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == car_a_remplacer) {
            chaine[i] = car_de_remplacement;
        }
    }

    // Afficher la chaîne modifiée
    printf("Résultat : %s\n", chaine);

    return 0;
}