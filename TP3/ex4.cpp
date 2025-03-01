#include <stdio.h>
#include <stdlib.h>

void inverse(int t[], int n) {
    if (!(n <= 1)) {
        int aux = t[0];
        t[0] = t[n-1];
        t[n-1] = aux;
        inverse(t + 1, n - 2);
    }
}

int main() {
    int t[] = {1,2,3,4,5};
    inverse(t,5);
    for (int i = 0; i < 5; i++)  {
        printf("t[%d] = %d\n",i,t[i]);
    }
    return 0;
}