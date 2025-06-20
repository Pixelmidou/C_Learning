#include <stdio.h>

int main() {
    int t[10][10],n;
    do {
        printf("saisir n : ");
        scanf("%d",&n);
    } while (n < 2 || n > 10);
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            do {
                printf("t[%d][%d] = ",i,j);
                scanf("%d",&t[i][j]);
            } while (t[i][j] < 0);
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            printf("t[%d][%d] = %d ",i,j,t[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<i; j++) {
            int aux;
            aux = t[i][j];
            t[i][j] = t[j][i];
            t[j][i] = aux;
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            printf("t[%d][%d] = %d ",i,j,t[i][j]);
        }
    }
}
