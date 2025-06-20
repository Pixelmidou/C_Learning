#include <stdio.h>

int main() {
    int n;
    do {
        printf("saisir n : ");
        scanf("%d",&n);
    } while (n <= 0);
    int s = 0;
    for (int i=1;i<=n;i++) {
        s = s + i;
    }
    printf("somme est %d", s);
}
