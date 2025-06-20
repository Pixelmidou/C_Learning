#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void saisie_er(char *ch) {
    printf("saisir verbe er : ");
    scanf("%s",ch);
    printf("%s\n",ch);
}

bool verif_er(char *ch) {
    char chc[20];
    strcpy(chc, ch);
    strrev(chc);
    return strncmp(chc,"re",2) == 0;
}

void conju(char *ch) {
    char chc[20];
    strncpy(chc,ch,strlen(ch)-2);
    chc[strlen(ch) - 2] = '\0';
    printf("je %se",chc);
}

int main() {
    char ch[20];
    saisie_er(ch);
    verif_er(ch) ? printf("res = true") : printf("res = false");
    printf("\n");
    conju(ch);
    return 0;
}