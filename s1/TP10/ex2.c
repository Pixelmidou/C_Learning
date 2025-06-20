#include <stdio.h>
#include <stdlib.h>

int verif(int t[],int n) {
    if (n <= 1) {
        return 1;
    } else if (t[n-1] >= t[n-2]) {
        return verif(t,n-1);
    } else {
        return 0;
    }
}
void main() {
    int t[] = {1, 2, 3, 4, -1};
    if (verif(t,5) == 1) {
        printf("trié");
    } else {
        printf("non trié");
    }
}

