#include <stdio.h>
#include <string.h>

int main()
{
    char chaine[100];
    char caractère_A_Remplacer, caractère_De_Remplacement;

    scanf("%s", chaine);

    scanf(" %c", &caractère_A_Remplacer);
    scanf(" %c", &caractère_De_Remplacement);

    for (int i = 0; chaine[i] != '\0'; i++)
    {
        if (chaine[i] == caractère_A_Remplacer)
        {
            chaine[i] = caractère_De_Remplacement;
        }
        
    }
    printf("Résultat : %s", chaine);
    return 0;
}
