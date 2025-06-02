#include <stdio.h>

int main() {
    char s1[100];           // Première chaîne
    char s2[100];           // Deuxième chaîne
    char resultat[200];     // Résultat de la concaténation
    int i = 0, j = 0;

    // Lire les deux chaînes depuis l'entrée
    scanf("%s", s1);  // Exemple : Code
    scanf("%s", s2);  // Exemple : loccol

    // Copier s1 dans resultat
    while (s1[i] != '\0') {
        resultat[i] = s1[i];
        i++;
    }

    // Copier s2 après s1
    while (s2[j] != '\0') {
        resultat[i] = s2[j];
        i++;
        j++;
    }

    // Terminer la chaîne concaténée
    resultat[i] = '\0';

    // Afficher le résultat final
    printf("Chaîne concaténée : %s\n", resultat);

    return 0;
}
