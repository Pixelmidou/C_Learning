#include <stdio.h>

int main() {
    int t[50][50],l,c,l1,l2,aux;
    do {
        printf("saisir l : ");
        scanf("%d",&l);
    } while (l < 2 || l > 50);
    do {
        printf("saisir c : ");
        scanf("%d",&c);
    } while (c < 2 || c > 50);
    for (int i = 0; i<l; i++) {
        for (int j = 0; j<c; j++) {
            do {
                printf("t[%d][%d] = ",i,j);
                scanf("%d",&t[i][j]);
            } while (t[i][j] < 0);
        }
    }
    for (int i = 0; i<l; i++) {
        for (int j = 0; j<c; j++) {
            printf("t[%d][%d] = %d ",i,j,t[i][j]);
        }
    }
    printf("\n");
    do {
        printf("ligne 1 : ");
        scanf("%d",&l1);
    } while (l1 > l);
    do {
        printf("ligne 2 : ");
        scanf("%d",&l2);
    } while (l2 > l || l1 == l2);
    for (int i = 0; i<c; i++) {
        aux = t[l1][i];
        t[l1][i] = t[l2][i];
        t[l2][i] = aux;
    }
    for (int i = 0; i<l; i++) {
        for (int j = 0; j<c; j++) {
            printf("%d\t ",t[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
