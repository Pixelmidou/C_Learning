#include <stdio.h>
#define PI 3.14

int main() {
    float r,s,p;
    printf("donner le rayon du cercle : ");
    scanf("%f",&r);
    p = 2 * PI * r;
    s = PI * r * r;
    printf("le perimetre du cercle est : %f\n",p);
    printf("la surface du cercle est : %f\n",s);
    return 0;
}
