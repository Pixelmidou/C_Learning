#include <stdio.h>

int main() {
    float a,b,c,min;
    printf("saisir a : ");
    scanf("%f",&a);
    printf("saisir b : ");
    scanf("%f",&b);
    printf("saisir c : ");
    scanf("%f",&c);
    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    printf("le minimum est %f",min);
    return 0;
}
