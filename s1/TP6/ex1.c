#include <stdio.h>

int main() {
    int t[10],n,imp[10],p[10],x,y,e,l,z,b;
    float ms,m;
    do {
        printf("saisir n : ");
        scanf("%d",&n);
    } while (n < 0 || n > 10);
    ms = 0;
    for (int i = 0; i < n; i++) {
        do {
            printf("saisir t[%d] : ",i);
            scanf("%d",&t[i]);
        } while ( t[i] < 0 );
        ms += t[i];
    }
    m = ms / n;
    printf("moyenne : %f\n", m);
    x,y = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] < m) {
            printf("element : t[%d] = %d\n",i,t[i]);
        }
        if (t[i] % 2 == 0) {
            p[x] = t[i];
            x++;
        } else {
            imp[y] = t[i];
            y++;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("t[%d] = %d\n",i,t[i]);
    }
    for (int i = 0; i < x; i++) {
        printf("p[%d] = %d\n",i,p[i]);
    }
    for (int i = 0; i < y; i++) {
        printf("imp[%d] = %d\n",i,imp[i]);
    }
    do {
        printf("chercher e : ");
        scanf("%d",&e);
    } while (e < 0);
    l = 0;
    z = 9;
    b = 0;
    while (l <= z && b == 0) {
        if (t[l] != e && t[z] != e) {
            l++;
            z--;
        } else {
            b = 1;
        }
    }
    if (b == 1) {
        printf("existe\n");
    } else {
        printf("n'existe pas\n");
    }
}
