#include <stdio.h>
float max(float a,float b) {
    return (a > b) ? a : b;
}
float min(float a,float b) {
    return (a < b) ? a : b;
}
int main() {
    float a,z,e,r,res1,res2;
    printf("saisir a : ");
    scanf("%f",&a);
    printf("saisir z : ");
    scanf("%f",&z);
    printf("saisir e : ");
    scanf("%f",&e);
    printf("saisir r : ");
    scanf("%f",&r);
    res1 = min(min(a,z),min(e,r));
    res2 = max(max(a,z),max(e,r));
    printf("min : %f\n",res1);
    printf("max : %f\n",res2);
}


