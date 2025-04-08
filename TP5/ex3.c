#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* saisie() {
    FILE *mots;
    int c = 0;
    mots = fopen("mots.txt","w");
    while (c != 50) {
        char ch[22];
        do {
            printf("saisir mot : ");
            gets(ch);
        } while (strlen(ch) > 20);
        if (strcmp(ch,"*") == 0) {
            break;
        }
        fputs(strcat(ch,"\n"),mots);
        c++;
    }
    fclose(mots);
    return mots;
}   

int main() {
    FILE *mots = saisie();
    return 0;
}