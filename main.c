#include <stdio.h>

int main() {
    char lettre;
    char mot_fixe[6] = {'n', 'a', 'd', 'o', 'r', '\0'}; 
    char mot_Cache[6] = {'_', '_', '_', '_', '_', '\0'}; 
    int trouve;
    int essais_faux = 0; 
    printf("\t -- Jeux de Devinette de Caracteres --\n");
    printf("\nBienvenue !\n");

    do {
         printf("Le mot se compose de :\t");
        for (int i = 0; i < 5; i++) {
            printf("%c ", mot_Cache[i]);
        }
        printf("\n");
        printf("Entrez une lettre : ");
        scanf(" %c", &lettre);
        trouve = 0;
        for (int i = 0; i < 5; i++) {
            if (mot_fixe[i] == lettre) {
                mot_Cache[i] = lettre;
               
            }
        }

        if (trouve) {
            printf("Bravo ! Vous avez trouve une lettre : '%c'\n", lettre);
        } else {
                        essais_faux++;
            printf("desole, la lettre '%c' n'est pas dans le mot.\n\n", lettre);
        }
         if (essais_faux == 5) {
            printf(" Game Over .\n");
            break;
        }

    } while (!trouve);

    printf("\n Le Mot est aprer votre bon sasier : ");
    for (int i = 0; i < 5; i++) {
        printf("%c ", mot_Cache[i]);
    }
    printf("\n");

    return 0;
}
