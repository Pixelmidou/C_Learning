#include <stdio.h>
#include <stdlib.h>

int palindrome(char t[], int n) {
    if (n <= 1) {
        return 1;
    } else if (t[0] != t[n-1]) {
        return 0;
    } else {
        return palindrome(t+1, n-2);
    }
}


int main() {
    char t[] = "KAYAK";
    char t1[] = "ZAZA";
    palindrome(t,4) ? printf("res = true") : printf("res = false");
    return 0;
}