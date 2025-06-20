#include <stdio.h>
int main() {
    int n;
    do {
        printf("saisir n : ");
        scanf("%d",&n);
    } while (n < 0);
    if (n == 0) {
        printf("0! = 1");
    } else {
        int r = 1;
        for (int i=n;i>=1;i--) {
            r = r * i;
        }
        printf("%d! = %d",n,r);
    }
}

