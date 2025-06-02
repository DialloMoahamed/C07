#include <stdio.h>

int main() {
    char str[200];
    int i = 0, inWord = 0, wordCount = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n' && !inWord) {
            inWord = 1;
            wordCount++;
        } else if (str[i] == ' ' || str[i] == '\n') {
            inWord = 0;
        }
        i++;
    }

    printf("Nombre de mots : %d\n", wordCount);
    return 0;
}
