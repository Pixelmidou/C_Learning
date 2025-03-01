#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int saisie_remplir(char ***ch) {
    int i = 0;
    int choix = 1;
    while (choix == 1) {
        *ch = realloc(*ch, (i + 1) * sizeof(char*)); // access lel tableau de pointeur li ytpointa 3al les tabs de strings
        // (*ch)[i] == *(*ch + i)
        (*ch)[i] = malloc(100 * sizeof(char)); // access lel chaine de caractere bidha (el char*)
        printf("saisir chaine : ");
        scanf("%s", (*ch)[i]);
        printf("continue (1 or 0) : ");
        scanf("%d", &choix);
        i++;
    }
    return i;
}

void tri(char **ch, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(ch[i], ch[j]) > 0) {
                char *aux = ch[i];
                ch[i] = ch[j];
                ch[j] = aux;
            }
        }
    }
}

int main() {
    char **ch = malloc(sizeof(char*));
    int n = saisie_remplir(&ch);
    for (int i=0;i < n;i++) {
        printf("%s ",ch[i]);
    }
    printf("\n");
    tri(ch,n);
    for (int i=0;i < n;i++) {
        printf("%s ",ch[i]);
    }
    return 0;
}