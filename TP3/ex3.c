#include <stdio.h>
#include <stdlib.h>

int pgcd(int x,int y) {
    if (y == 0) {
        return x;
    } else {
        return pgcd(y,x%y);
    }
}

int main() {
    printf("pgcd = %d", pgcd(6,3));
    return 0;
}