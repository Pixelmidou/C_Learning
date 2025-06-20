#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char *a;
    char *b;
} traduction;

void remplir(traduction *dico,int n) {
        printf("traduction 1\n");
        char x[100];
        printf("saisir a : "); scanf("%s",x); printf("\n");
        dico->a = malloc(strlen(x)*sizeof(char*));
        strcpy(dico->a,x);
        printf("saisir b : "); scanf("%s",x); printf("\n");
        dico->b = malloc(strlen(x)*sizeof(char*));
        strcpy(dico->b,x);
    for (traduction *p=dico+1;p < dico+n;p++) {
        printf("traduction %d\n",p-dico+1);
        do {
            printf("saisir a : "); scanf("%s",x); printf("\n");
            p->a = malloc(strlen(x)*sizeof(char*));
            strcpy(p->a,x);
            printf("saisir b : "); scanf("%s",x); printf("\n");
            p->b = malloc(strlen(x)*sizeof(char*));
            strcpy(p->b,x);
        } while (strcmp((p-1)->a ,p->a) > 0);
    }
}

void affiche(traduction *dico,int n) {
    for (traduction *p=dico;p < dico+n;p++) {
        printf("traduction %d\n",p-dico+1);
        printf("a : %s\n",p->a);
        printf("b : %s\n",p->b);
    }
    printf("\n");
}

char* recherche(traduction *dico,int n, char *s) {
    for (traduction *p=dico;p < dico+n;p++) {
        if (strcasecmp(p->a, s) == 0) {
            return p->b;
        }
    }
    return NULL;
}

int nb_espaces(char *s) {
    int i;
    while (s[i] != '\0') {
        if (isspace(s[i])) {
            i++;
        }
    }
    return i;
}

char** decoupe(char *s) {
    int nb = abs(nb_espaces(s));
    char **t = malloc((nb + 1) * sizeof(char*));
    int i = 0;
    while (*s != '\0') {
        char *space = strchr(s, ' ');
        if (space == NULL) {
            t[i] = malloc((strlen(s) + 1) * sizeof(char));
            strcpy(t[i], s);
            i++;
            break;
        } else {
            t[i] = malloc((space - s + 1) * sizeof(char));
            strncpy(t[i], s, space - s);
            t[i][space - s] = '\0';
            i++;
            s = space + 1;
        }
    }
    t[i] = NULL;
    return t;
}

char* reconstruit(char **t) {
    int size = 0;
    for (int i = 0; t[i] != NULL; i++) {
        size += strlen(t[i]);
        size++;
    }
    char *ch = malloc((size+1)*sizeof(char));
    int i = 0;
    for (int j = 0; t[j] != NULL; j++) {
        strcpy(ch+i, t[j]);
        i += strlen(t[j]);
        ch[i] = ' ';
        i++;
    }
    ch[i-1] = '\0';
    return ch;
}

char* traitement(char **t,traduction *dico,int nd) {
    int nt = 0;
    while (t[nt] != NULL) nt++;
    char **t1 = malloc((nt+1)*sizeof(char*));
    int i;
    int j = 0;
    for (i = 0; t[i] != NULL; i++) {
        char *x = recherche(dico,nd,t[i]);
        if (x != NULL) {
            t1[j] = malloc(strlen(x)*sizeof(char));
            strcpy(t1[j],x);
            j++;
        }
    }
    t1[j] = NULL;
    char *res = reconstruit(t1);
    return res;
}

int main() {
    int n;
    printf("donner n : "); scanf("%d",&n);
    traduction *dico = malloc(n*sizeof(traduction));
    remplir(dico,n);
    affiche(dico,n);
    char *s = malloc(100*sizeof(char));
    fflush(stdin); printf("donner phrase recherche : "); gets(s);
    char **t = decoupe(s);
    printf(traitement(t,dico,n));
    return 0;
}