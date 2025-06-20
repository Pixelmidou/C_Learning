#include <stdio.h>

int main() {
    int t[10],n,e,j;
    do {
        printf("saisir n : ");
        scanf("%d",&n);
    } while (n < 0 || n > 9);
    printf("t[0] = ");
    scanf("%d",&t[0]);
    for (int i = 1; i<n ; i++) {
        do {
            printf("t[%d] = ",i);
            scanf("%d",&t[i]);
        } while (t[i] < 0 || t[i-1] > t[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("t[%d] = %d ",i,t[i]);
    }
    printf("\n");
    do {
        printf("donner e : ");
        scanf("%d",&e);
    } while (e < 0);
    j = n-1;
    while (t[j] > e) {
        t[j+1] = t[j];
        j--;
    }
    t[j+1] = e;
    for (int i = 0; i <= n; i++) {
        printf("t[%d] = %d ",i,t[i]);
    }
    printf("\n");
}
