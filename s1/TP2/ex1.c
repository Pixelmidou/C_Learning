#include <stdio.h>

int main() {
    int a,b,s;
    float m;
    printf("donner a : ");
    scanf("%d",&a);
    printf("donner b : ");
    scanf("%d",&b);
    s = a + b;
    m = (float) s/2; // au moins un terme reel pour avoir "," (partie vergule) dans le résultat
    printf("la somme de %d + %d est %d\n",a,b,s);
    printf("la moyenne de %d et %d est %f\n",a,b,m);
    return 0;
}
