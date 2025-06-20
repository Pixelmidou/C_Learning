#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,*t,*x,*y;
    do {
        printf("saisir n: ");
        scanf("%d",&n);
    } while (n < 2);
    t = (int*) malloc(n*sizeof(int));
    for (int *p = t; p <= t+n-1; p++) {
        do {
            printf("t[%d] : ",p-t);
            scanf("%d",p);
        } while (*p < 0);
    }
    for (int *p = t; p <= t+n-1; p++) {
        printf("t[%d] : %d ",p-t,*p);
    }
    printf("\n");
    x = t;
    y = t+n-1;
    while (x <= y && *x == *y) {
        x++;
        y--;
    }
    x <= y ? printf("non symetrique") : printf("symetrique");
}
