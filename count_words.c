#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0, inWord = 0;

    fgets(str, sizeof(str), stdin); // Lecture sécurisée

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                inWord = 1; // Début d'un mot
                count++;
            }
        } else {
            inWord = 0; // Fin d'un mot
        }
        i++;
    }

    printf("Nombre de mots : %d\n", count);
    return 0;
}
