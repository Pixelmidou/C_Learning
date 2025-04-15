#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool carc_spec(char x) {
    char ch[] = {'_','#','@',':','&','|'};
    for (int i = 0; i < 6; i++) {
        if (x == ch[i]) {
            return true;
        }
    }
    return false;
}

char* distinct_spec(char* ch) {
    char *s = malloc((strlen(ch)+1)*sizeof(char));
    int j = 0;
    for (int i = 0; i < strlen(ch); i++) {
        if (carc_spec(ch[i]) || ch[i] == ch[i-1]) {
            continue;
        }
        s[j] = ch[i];
        j++;
    }
    s[j] = '\0';
    return s;
}

FILE* charger(char* nom_ficher) {
    FILE* alpha;
    alpha = fopen(nom_ficher,"w");
    char ch[200];
    printf("saisir chaine : ");
    gets(ch);
    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] >= 'A' && ch[i] <= 'Z' || ch[i] >= 'a' && ch[i] <= 'z') {
        // OU : if (isalpha((unsigned char)ch[i])) ...
            fprintf(alpha,"%c",ch[i]);
        }
    }
    fclose(alpha);
    return alpha;
}

bool voyelle(char x) {
    char ch[] = {'o','u','i','e','y','a'};
    for (int i = 0; i < 6; i++) {
        if (x == ch[i]) {
            return true;
        }
    }
    return false;
}

int* compter(FILE* alpha, char* nom_ficher) {
    char ch[200];
    int cons = 0;
    int voy = 0;
    alpha = fopen(nom_ficher,"r");
    while (fgets(ch,200,alpha)) {
        for (int i = 0; ch[i] != '\0'; i++) {
            if (voyelle(ch[i])) voy++;
            else cons++;
        }
    }
    fclose(alpha);
    int *res = malloc(2*sizeof(int));
    res[0] = voy;
    res[1] = cons;
    return res;
}

int main() {
    FILE* alpha = charger("lettre.txt");
    int *res = compter(alpha,"lettre.txt");
    printf("nb voyelles : %d\nnb consonnes : %d", res[0], res[1]);
    return 0;
}