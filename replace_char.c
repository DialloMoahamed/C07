#include <stdio.h>
#include <string.h>

int main() {
  char chaine[100], caractere_a_remplacer, caractere_de_remplacement;

  // Demander à l'utilisateur de saisir la chaîne
  fgets(chaine, sizeof(chaine), stdin); // Utilisation de gets peut être dangereuse, utiliser fgets à la place en production

  // Demander à l'utilisateur le caractère à remplacer
  scanf(" %c", &caractere_a_remplacer); // Notez le espace avant %c pour éviter les problèmes de lecture des caractères spéciaux

  // Demander à l'utilisateur le caractère de remplacement
  scanf(" %c", &caractere_de_remplacement);

  // Parcourir la chaîne et remplacer les caractères
  int i;
  for (i = 0; chaine[i] != '\0'; i++) {
    if (chaine[i] == caractere_a_remplacer) {
      chaine[i] = caractere_de_remplacement;
    }
  }

  // Afficher la chaîne modifiée
  printf("Résultat: %s\n", chaine);

  return 0;
}