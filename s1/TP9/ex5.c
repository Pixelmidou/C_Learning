#include <stdio.h>
#include <stdlib.h>

void saisit(int *t,int n) {
    for (int *p = t; p <= t+n-1; p++) {
        do {
            printf("t[%d] : ",p-t);
            scanf("%d",p);
        } while (*p < 0);
    }
}
void affiche (int *t,int n) {
    for (int *p = t; p <= t+n-1; p++) {
        printf("t[%d] : %d ",p-t,*p);
    }
    printf("\n");
}
int identique(int *t1,int *t2,int n) {
    int i;
    while (i <= n-1 && *(t1+i) == *(t2+i)) {
        i++;
    }
    return (i < n) ? 0 : 1;
}
int main() {
    int n,*t1,*t2;
    do {
        printf("saisir n : ");
        scanf("%d",&n);
    } while (n > 100 || n < 2);
    t1 = (int*) malloc(n*sizeof(int));
    printf("tab1 :\n");
    saisit(t1,n);
    printf("tab2 :\n");
    saisit(t2,n);
    printf("tab1 :\n");
    affiche(t1,n);
    printf("tab2 :\n");
    affiche(t2,n);
    identique(t1,t2,n) == 1 ? printf("identique") : printf("non identique");
}

