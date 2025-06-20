#include <stdio.h>

int main() {
    for (int i = 1;i<=1000;i++) {
        int j = 0;
        int x = 1;
        while ( x <= i/2 ) {
            if (i % x == 0) {
                j = j + x;
            }
            x++;
        }
        if (i == j) {
            printf("%d ",i);
        }
    }
}

