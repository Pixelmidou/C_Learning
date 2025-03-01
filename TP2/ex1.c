#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int cp;
    char vil[20];
} adresse;

typedef struct {
    char nom[20];
    char pre[20];
    int num;
    adresse *adr;
} employer;

void remplir(employer *t,int n) {
    for (employer *p=t; p < t+n; p++) {
        printf("t[%d]\n",p-t);
        printf("saisir nom : ");
        scanf("%s",p->nom);
        printf("\n");
        printf("saisir prenom : ");
        scanf("%s",p->pre);
        printf("\n");
        printf("saisir num tel : ");
        scanf("%d",&p->num);
        printf("\n");
        p->adr = (adresse*) malloc(sizeof(adresse));
        printf("saisir code postal : ");
        scanf("%d",&p->adr->cp);
        printf("\n");
        printf("saisir ville : ");
        scanf("%s",p->adr->vil);
        printf("\n");
    }
}

void afficher(employer *t,int n,int cop) {
    employer *p;
    int x = 0;
    for (p=t; p < t+n; p++) {
        if (p->adr->cp == cop) {
            printf("nom : ");
            puts(p->nom);
            x++;
        }
    }
    if (x == 0) {
        printf("404: Not Found");
    }
}

int main() {
    int n,cop;
    printf("donner n : ");
    scanf("%d",&n);
    employer *t = malloc(n*sizeof(employer));
    remplir(t,n);
    printf("donner code postal a chercher : ");
    scanf("%d",&cop);
    afficher(t,n,cop);
    return 0;
}