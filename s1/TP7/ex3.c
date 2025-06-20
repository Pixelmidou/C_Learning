#include <stdio.h>

int main() {
    int t[50][50],l,c,max[50],y,maxint,z,sumint;
    float moy[50];
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
    y = 0;
    for (int i = 0; i<l; i++) {
        maxint = t[i][0];
        for (int j = 1; j<c; j++) {
            if (t[i][j] > maxint) {
                maxint = t[i][j];
            }
        }
        max[y] = maxint;
        y++;
    }
    for (int i = 0; i<y; i++) {
        printf("max[%d] = %d ",i,max[i]);
    }
    printf("\n");
    z = 0;
    for (int j = 0; j<c; j++) {
        sumint = 0;
        for (int i = 0; i<l; i++) {
            sumint += t[i][j];
        }
        moy[z] = (float) sumint / c;
        z++;
    }
    for (int i = 0; i<z; i++) {
        printf("moy[%d] = %f ",i,moy[i]);
    }
    printf("\n");
}
