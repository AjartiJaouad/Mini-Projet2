#include <stdio.h>

int main() {
    char lettre;
    char mot_fixe[6] = {'n', 'a', 'd', 'o', 'r', '\0'}; 
    char mot_Cache[6] = {'_', '_', '_', '_', '_', '\0'}; 
    
    printf("\t -- Jeu de Devinette de Caracteres --\n");

    printf("\nBienvenue !\n");
    printf("Le mot se compose de :\t");
    
    for ( int i = 0; i < 5; i++) {
        printf("%c ", mot_Cache[i]);
    }
    printf("\n");

    printf("Entrez une lettre : ");
    scanf(" %c", &lettre);

    return 0;
}
