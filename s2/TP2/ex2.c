#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int n;

typedef struct {
    int jj;
    int mm;
    int aaaa;
} date;

typedef struct {
    int mat;
    char marq[20];
    date dmc;
} voiture;

void saisie(voiture *t) {
    for (voiture *p=t; p < t+n; p++) {
        printf("\n");
        printf("voiture %d\n",p-t+1);
        printf("saisir matricule : ");
        scanf("%d",&p->mat);
        printf("\n");
        printf("saisir marque : ");
        scanf("%s",p->marq);
        printf("\n");
        printf("saisir jour : ");
        scanf("%d",&p->dmc.jj);
        printf("\n");
        printf("saisir mois : ");
        scanf("%d",&p->dmc.mm);
        printf("\n");
        printf("saisir annee : ");
        scanf("%d",&p->dmc.aaaa);
        printf("\n");
    }
}

void afficher(voiture v) {
    printf("\n");
    printf("matricule : ");
    printf("%d\n",v.mat);
    printf("marque : ");
    printf("%s\n",v.marq);
    printf("jour : ");
    printf("%d\n",v.dmc.jj);
    printf("mois : ");
    printf("%d\n",v.dmc.mm);
    printf("annee : ");
    printf("%d\n",v.dmc.aaaa);
}

int rech_date(voiture *t, date d) {
    int x = 0;
    for (voiture *p=t; p < t+n; p++) {
        if (p->dmc.aaaa > d.aaaa || p->dmc.aaaa == d.aaaa && p->dmc.mm > d.mm || p->dmc.aaaa == d.aaaa && p->dmc.mm == d.mm && p->dmc.jj > d.jj) {
            x++;
        }
    }
    return x;
}

void rech_marq(voiture *t,char *m) {
    bool valbool = false;
    for (voiture *p = t; p < t + n; p++) {
        if (strcmp(p->marq, m) == 0) {
            valbool = true;
            afficher(*p);
        }
    }

    if (!valbool) {
        printf("404: Not Found");
    }
}

int main() {
    printf("donner n : ");
    scanf("%d",&n);
    voiture *t = malloc(n*sizeof(voiture));
    saisie(t);
    voiture v;
    char *m = malloc(20*sizeof(char));
    printf("recherche marque : ");
    scanf("%s", m);
    rech_marq(t,m);
    date d;
    printf("recherche jour : ");
    scanf("%d",&d.jj);
    printf("\n");
    printf("recherche mois : ");
    scanf("%d",&d.mm);
    printf("\n");
    printf("recherche annee : ");
    scanf("%d",&d.aaaa);
    printf("\n");
    int x = rech_date(t,d);
    if (x == 0) {
        printf("404: Not Found");
    } else {
        printf("nombre = %d",x);
    }
    return 0;
}