#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i = 0, inWord = 0, count = 0;

    printf("Entrez une phrase : ");
    fgets(str, sizeof(str), stdin);

    // Nettoyer les ponctuations (sauf apostrophes)
    while (str[i] != '\0') {
        if (ispunct(str[i]) && str[i] != '\'') {
            str[i] = ' ';
        }
        i++;
    }

    // Réinitialiser l'index pour analyser les mots
    i = 0;

    while (str[i] != '\0') {
        if (isalpha(str[i]) || str[i] == '\'') {
            if (!inWord) {
                inWord = 1;
                count++;
            }
        } else {
            inWord = 0;
        }
        i++;
    }

    printf("Nombre de mots : %d\n", count);
    return 0;
}
