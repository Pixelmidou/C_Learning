#include <stdio.h>

int main() {
    int a,x,r;
    do {
        printf("saisir a : ");
        scanf("%d",&a);
    } while (a < 0);
    r = a;
    x = 0;
    while (a != 0) {
        x += a % 10;
        a /= 10;
    }
    printf("somme de chiffre de %d est %d",r,x);
}

