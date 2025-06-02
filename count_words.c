#include <stdio.h>

int main() {
    char chaine[200];
    int i = 0;
    int dans_un_mot = 0;
    int mots = 0;

    // Lire une ligne entière (avec espaces)
    fgets(chaine, sizeof(chaine), stdin);

    // Parcourir la chaîne caractère par caractère
    while (chaine[i] != '\0') {
        char c = chaine[i];

        if (c != ' ' && c != '\n' && c != '\t') {
            // Si on trouve une lettre et qu'on n'était pas déjà dans un mot
            if (dans_un_mot == 0) {
                mots++;            // Nouveau mot détecté
                dans_un_mot = 1;   // On est dans un mot
            }
        } else {
            // Si on rencontre un espace ou retour à la ligne
            dans_un_mot = 0;       // Fin d’un mot en cours
        }

        i++;
    }

    // Afficher le nombre de mots
    printf("Nombre de mots : %d\n", mots);

    return 0;
}
