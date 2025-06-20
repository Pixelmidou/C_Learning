#include <stdio.h>

int main() {
    int n,p,imp;
    p = 0;
    imp = 0;
    do {
        printf("saisir n : ");
        scanf("%d",&n);
        if (n > 0) {
            n % 2 == 0 ? p++ : imp++;
        }
    } while (n != 0);
    printf("nombre impair : %d , nombre pair : %d",imp,p);
}
