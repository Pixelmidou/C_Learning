#include <stdio.h>

FILE* remplir(char* nom_ficher, int nb_emp) {
    FILE* emp;
    emp = fopen(nom_ficher,"w");
    char ch[200];
    for (int i = 0;i < nb_emp; i++) {
        printf("saisir enreg : ");
        gets(ch);
        fputs(ch,emp);
    }
    fclose(emp);
    return emp;
}

void affiche(FILE* emp, char* nom_ficher) {
    emp = fopen(nom_ficher,"r");
    char ch[200];
    while (fgets(ch,200,emp)) {
        printf("%s",ch);
    }
    fclose(emp);
}

int main() {
    // OR : void remplir(...) lfou9
    // fi el main : emp = fopen(nom_ficher,"w+"); mode write-read fard wa9t
    FILE* emp = remplir("inform.txt",2);
    affiche(emp,"inform.txt");
    return 0;
}