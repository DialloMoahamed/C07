#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chaine[100];
    int count = 0;
    int in_word = 0;

    fgets(chaine, sizeof(chaine), stdin);
    chaine[strcspn(chaine, "\n")] = 0;

    if (chaine[0] != '\0') {
        for (int i = 0; chaine[i] != '\0'; i++) {
            if (isspace(chaine[i])) {
                in_word = 0;
            } else if (!in_word) {
                in_word = 1;
                count++;
            }
        }
    }

    printf("Nombre de mots : %d\n", count);

    return 0;
}