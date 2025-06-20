#include <stdio.h>
#include <stdlib.h>

typedef struct employe {
    char nom[20];
    int tel;
} employe;

void remplir(employe *t, int n) {
    for (employe *p=t; p < t+n ;p++) {
        printf("donner le nom : ");
        scanf("%s",p->nom);
        printf("donner le telephone : ");
        scanf("%d",&p->tel);
        printf("\n");
    }
}

void afficher(employe *t,int n) {
    for (employe *p=t; p < t+n ;p++) {
        printf("t[%d]\n",p-t);
        printf("%s\n",p->nom);
        printf("%d\n",p->tel);
        printf("\n");printf("\n");
    }
}

int main() {
    int n;
    employe *t;
    printf("saisir n : ");
    scanf("%d",&n);
    t = (employe*) malloc(n*sizeof(employe));
    remplir(t,n);
    afficher(t,n);
    return 0;
}
