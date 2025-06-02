#include <stdio.h>
#include <string.h>

int main(void) {
    char chaine[100];
    char caractere_a_remplacer, caractere_de_remplacement;

    // Lire la chaîne + les 2 caractères sur une seule ligne
    scanf("%s %c %c", chaine, &caractere_a_remplacer, &caractere_de_remplacement);

    // Remplacer les caractères
    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == caractere_a_remplacer) {
            chaine[i] = caractere_de_remplacement;
        }
    }

    // Affichage EXACTEMENT comme demandé
    printf("Résultat : %s\n", chaine);

    return 0;
}
