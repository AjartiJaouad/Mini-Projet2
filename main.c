#include <stdio.h>

int main() {
    char lettre;
    char mot_fixe[6] = {'n', 'a', 'd', 'o', 'r', '\0'}; 
    char mot_Cache[6] = {'_', '_', '_', '_', '_', '\0'}; 
    int trouve;
    int essais_faux = 0;
    int max_essais = 5;

    printf("\t -- Jeux de Devinette de Caracteres --\n");
    printf("\nBienvenue !\n");

    do {
        printf("Le mot se compose de :\t");
        for (int i = 0; i < 5; i++) {
            printf("%c ", mot_Cache[i]);
        }
        printf("\n");
        printf("Tentatives restantes : %d\n", max_essais - essais_faux);
        printf("Entrez une lettre : ");
        scanf(" %c", &lettre);

        trouve = 0;
        for (int i = 0; i < 5; i++) {
            if (mot_fixe[i] == lettre && mot_Cache[i] != lettre) {
                mot_Cache[i] = lettre;
                trouve = 1;
            }
        }

        if (trouve) {
            printf("Bravo ! Vous avez trouve une lettre : '%c'\n", lettre);
        } else {
            essais_faux++;
            printf("Desole, la lettre '%c' n'est pas dans le mot.\n\n", lettre);
        }

        int complet = 1;
        for (int i = 0; i < 5; i++) {
            if (mot_Cache[i] == '_') {
                complet = 0;
                break;
            }
        }

        if (complet) {
            printf("\nFelicitation ! Vous avez devine le mot : %s\n", mot_Cache);
            return 0;
        }

        if (essais_faux == max_essais) {
            printf(" Game Over!\n");
            printf("Le mot etait : %s\n", mot_fixe);
            break;
        }

    } while (1);

    return 0;
}
