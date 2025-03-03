#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *a;
    char *b;
} traduction;

void remplir(traduction *dico,int n) {
    for (traduction *p=dico;p < dico+n;p++) {
        printf("traduction %d\n",p-dico+1);
        p->a = (char*) malloc(100*sizeof(char));
        p->b = (char*) malloc(100*sizeof(char));
        printf("saisir a : "); scanf("%s",p->a);
        printf("\n");
        printf("saisir b : "); scanf("%s",p->b);
        printf("\n");
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

void tri(traduction *dico, int n) {
    for (traduction *p1=dico;p1 < dico+n-1;p1++) {
        for (traduction *p2=p1+1;p2 < dico+n;p2++) {
            if (strcmp(p1->a, p2->a) > 0) {
                traduction aux = *p1;
                *p1 = *p2;
                *p2 = aux;
            }
        }
    }
}

char* recherche(traduction *dico,int n, char *s) {
    for (traduction *p=dico;p < dico+n;p++) {
        if (strcasecmp(p->a, s) == 0) {
            return p->b;
        }
    }
    return NULL;
}

int main() {
    int n;
    printf("donner n : "); scanf("%d",&n);
    traduction *dico = malloc(n*sizeof(traduction));
    remplir(dico,n);
    printf("affichage original :\n");
    affiche(dico,n);
    tri(dico,n);
    printf("affichage trie :\n");
    affiche(dico,n);
    char *s = malloc(100*sizeof(char));
    printf("donner mot recherche : "); scanf("%s",s);
    printf("traduction de %s est %s",s,recherche(dico,n,s));
    return 0;
}