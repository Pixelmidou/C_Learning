#include <stdio.h>
#include <stdlib.h>

int verif_tri(int t[],int n) {
    if (n == 0) {
        return 1;
    } else if (t[n-1] < t[n-2]) {
        return 0;
    } else {
        return verif_tri(t,n-1);
    }
}

int main() {
    int t[] = {5,2,1,3,7};
    int t1[] = {1,2,3,4,5};
    verif_tri(t1,5) ? printf("res = true") : printf("res = false");
    return 0;
}