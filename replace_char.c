#include <stdio.h>

int main() {
    char str[100], oldChar, newChar;
    int i = 0;

    fgets(str, sizeof(str), stdin);

    scanf(" %c", &oldChar);

    scanf(" %c", &newChar);

    while (str[i] != '\0') {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
        i++;
    }

    printf("Résultat : %s", str);
    return 0;
}
