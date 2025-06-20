#include <stdio.h>

int main() {
    int n;
    do {
        printf("saisir n : ");
        scanf("%d",&n);
    } while (n <= 0);
    int j = 2;
    int b = 1;
    while (j <= n/2 && b == 1) {
        n % j == 0 ? b = 0 : j++;
    }
    b != 0 ? printf("%d est premier\n",n) : printf("%d n'est pas premier\n",n);
    //
    //
    for (int i = 2; i<=1001; i++) {
        int j = 2;
        int b = 1;
        while (j <= i/2 && b == 1) {
            i % j == 0 ? b = 0 : j++;
        }
        if (b != 0) {
            printf("%d ",i);
        }
    }
}

