#include <stdio.h>

int main() {
    int a,b,x,y,r;
    do {
        printf("saisir a : ");
        scanf("%d",&a);
    } while (a <= 0);
    do {
        printf("saisir b : ");
        scanf("%d",&b);
    } while (b <= 0);
    x = a;
    y = b;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    printf("pgcd %d,%d = %d",x,y,a);
}
