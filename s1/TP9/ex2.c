#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,*t1,m,*t2,*x;
    do {
        printf("saisir n: ");
        scanf("%d",&n);
    } while (n < 2);
    t1 = (int*) malloc(n*sizeof(int));
    for (int *p = t1; p <= t1+n-1; p++) {
        do {
            printf("t1[%d] : ",p-t1);
            scanf("%d",p);
        } while (*p < 0);
    }
    do {
        printf("saisir m: ");
        scanf("%d",&m);
    } while (m < 2);
    t2 = (int*) malloc(m*sizeof(int));
    for (int *p = t2; p <= t2+m-1; p++) {
        do {
            printf("t2[%d] : ",p-t2);
            scanf("%d",p);
        } while (*p < 0);
    }
    for (int *p = t1; p <= t1+n-1; p++) {
        printf("t1[%d] : %d ",p-t1,*p);
    }
    printf("\n");
    for (int *p = t2; p <= t2+m-1; p++) {
        printf("t2[%d] : %d ",p-t2,*p);
    }
    printf("\n");
    t1 = (int*) realloc(t1,(n + 1) * sizeof(int));
    x = t1+n;
    for (int *p = t2; p <= t2+m-1; p++) {
        *x = *p;
        t1 = (int*) realloc(t1,(n + 1) * sizeof(int));
        x++;
    }
    for (int *p = t1; p <= t1+n+m-1; p++) {
        printf("t[%d] : %d ",p-t1,*p);
    }
}
