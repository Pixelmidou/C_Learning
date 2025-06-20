#include <stdio.h>

int main() {
    // ax^2 + bx + c = 0
    int a,b,c;
    float d;
    printf("saisir a : ");
    scanf("%d",&a);
    printf("saisir b : ");
    scanf("%d",&b);
    printf("saisir c : ");
    scanf("%d",&c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("x = toutes entiers possibles (R)");
            } else {
                printf("pas de solution");
            }
        } else {
            printf("x = %f",((float)(-c)/b));
        }
    } else {
        d = b * b - 4 * a * c;
        if (d < 0) {
            printf("pas de solution");
        } else if (d == 0) {
            printf("x = %f", (-b/2*a));
        } else {
            printf("x = %f ou x = %f",((-b+sqrt(d))/2*a),((-b-sqrt(d))/2*a));
        }
    }
    return 0;
}
