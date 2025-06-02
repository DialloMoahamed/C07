#include <stdio.h>

int main() {
    char chaine[200];
    int i = 0;
    int dans_un_mot = 0;
    int mots = 0;

    // Lire toute la ligne (jusqu'à \n) sans fgets
    scanf(" %[^\n]", chaine);  // lit avec espaces, mais sans '\n'

    // Parcourir la chaîne
    while (chaine[i] != '\0') {
        char c = chaine[i];

        if (c != ' ' && c != '\t') {
            if (dans_un_mot == 0) {
                mots++;
                dans_un_mot = 1;
            }
        } else {
            dans_un_mot = 0;
        }

        i++;
    }

    // Affichage strict
    printf("Nombre de mots : %d\n", mots);

    return 0;
}
