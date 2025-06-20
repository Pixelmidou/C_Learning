#include <stdio.h>
#include <stdlib.h>

void maxmin (int *t,int n, int *admax, int *admin) {
    *admax = *t;
    *admin = *t;
    for (int *p = t+1; p <= t+n-1; p++) {
        if (*p > *admax) {
            *admax = *p;
        }
        if (*p < *admin) {
            *admin = *p;
        }
    }
}
int main() {
    int *v,n,admax,admin;
    do {
        printf("saisir n : ");
        scanf("%d",&n);
    } while (n < 2 || n > 20);
    v = (int*) malloc(n*sizeof(int));
    for (int i = 0; i <= n-1; i++) {
        printf("v[%d] : ",i);
        scanf("%d",v+i);
    }
    for (int i = 0; i <= n-1; i++) {
        printf("t[%d] : %d ",i,v[i]);
    }
    printf("\n");
    maxmin(v,n,&admax,&admin);
    printf("max : %d\n", admax);
    printf("min : %d", admin);
}


