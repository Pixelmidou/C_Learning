#include <stdio.h>

float moyenne(float a,float b) {
    return (float) (a+b) / 2;
}
int main() {
    float a,b;
    printf("saisir a : ");
    scanf("%f",&a);
    printf("saisir b : ");
    scanf("%f",&b);
    printf("moyenne : %f", moyenne(a,b));
}

