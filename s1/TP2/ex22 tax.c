#include<stdio.h>
#define tax 0.196
void main ()
{
    float a;
    scanf("%f",&a);
    a=a+a*tax;
    printf("le prix finale est %f $",a);


}
