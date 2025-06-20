#include <stdio.h>

int main() {
    int a,b;
    printf("saisir a : ");
    scanf("%d",&a);
    printf("saisir b : ");
    scanf("%d",&b);
    if (a == 0) {
        if (b == 0) {
            printf("x = toutes entiers possibles (R)");
        }
    } else {
        printf("x = %f",((float)(-b)/a));
    }
    return 0;
}
