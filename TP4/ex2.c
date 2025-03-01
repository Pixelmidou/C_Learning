#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void saisie_er(char *ch) {
    printf("saisir chaine : ");
    gets(ch);
}

void sup(char *ch) {
    int i = 0;
    int j = 0;
    while (ch[i] != '\0') {
        if (!isspace(ch[i])) {
            ch[j] = ch[i];
            j++;
        }
        i++;
    }
    ch[j] = '\0';
}

int main() {
    char ch[20];
    saisie_er(ch);
    sup(ch);
    printf("\n%s",ch);
    return 0;
}