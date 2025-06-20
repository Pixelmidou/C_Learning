#include <stdio.h>

int main() {
    int n;
    do {
        printf("saisir n : ");
        scanf("%d",&n);
    } while (n < 1);
    float s = 1;
    for (int i=2;i<=n;i++) {
        s = s + (float) 1 / i;
    }
    printf("somme est %f\n", s);
    // factoriel de 5
    int r = 1;
    for (int i=5;i>=1;i--) {
        r = r * i;
    }
    printf("fact de 5: %d",r);
}
