#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void remplircroissant(int *t,int n) {
    printf("saisir t[0]: ");
    scanf("%d",t);
    for (int *p=t+1;p<t+n;p++) {
        do {
            printf("saisir t[%d] = ",p-t);
            scanf("%d",p);
        } while (*(p-1) >= *p);
    }
    printf("\n");
}
void remplirdecroissant(int *t,int n) {
    printf("saisir t[0]: ");
    scanf("%d",t);
    for (int *p=t+1;p<t+n;p++) {
        do {
            printf("saisir t[%d] = ",p-t);
            scanf("%d",p);
        } while (*(p-1) <= *p);
    }
    printf("\n");
}
void affichetab(int *t,int n) {
    for (int *p = t; p < t+n; p++) {
        printf("t[%d] : %d ",p-t,*p);
    }
    printf("\n");
}
int somme(int *t,int n) {
    int sum = 0;
    for (int *p = t; p < t+n; p++) {
        sum += *p;
    }
    return sum;
}
void remplacer(int *t,int n,int x) {
    if (x < 0) {
        printf("il faut entier strictement positif");
    } else {
        for (int *p = t; p < t+n; p++) {
            *p = pow(*p,x);
        }
    }
}
void fusion(int *t1,int *t2,int *t3,int n1,int n2) {
    int *x = t1;
    int *y = t2+n2-1;
    int *p = t3;
    while (x < t1+n1 && y >= t2) {
        if (*x > *y) {
            *p = *y;
            y--;
            p++;
        } else {
            *p = *x;
            x++;
            p++;
        }
    }
    while (x < t1+n1) {
        *p = *x;
        x++;
        p++;
    }
    while (y >= t2) {
        *p = *y;
        y--;
        p++;
    }
}
void main() {
    int *t1,n1,*t2,n2;
    do {
        printf("saisir n1: ");
        scanf("%d",&n1);
    } while (n1 < 2);
    do {
        printf("saisir n2: ");
        scanf("%d",&n2);
    } while (n2 < 2);
    t1 = (int*) malloc(n1*sizeof(int));
    t2 = (int*) malloc(n2*sizeof(int));
    int *t3  = malloc((n1+n2)*sizeof(int));
    remplircroissant(t1,n1);
    remplirdecroissant(t2,n2);
    affichetab(t1,n1);
    affichetab(t2,n2);
    fusion(t1,t2,t3,n1,n2);
    affichetab(t3,n1+n2);
}
