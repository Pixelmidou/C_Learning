#include <stdio.h>

int main() {
    int a,b;
    char op;
    printf("saisir op : ");
    scanf("%c",&op);
    printf("saisir a : ");
    scanf("%d",&a);
    printf("saisir b : ");
    scanf("%d",&b);
    switch (op) {
        case '+': printf("a + b = %d", a+b); break;
        case '-': printf("a - b = %d", a-b); break;
        case '%': printf("a % b = %d", a%b); break;
        default : printf("op non existant"); break;
    }
    return 0;
}
