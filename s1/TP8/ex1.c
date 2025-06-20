#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a,*b,aux1,*aux2;
    a = (int*) malloc(sizeof(int));
    b = (int*) malloc(sizeof(int));
    printf("saisir a: ");
    scanf("%d",a);
    printf("saisir b: ");
    scanf("%d",b);
    printf("ancien a : %d\n",*a);
    printf("ancien b : %d\n",*b);
    // permutation avec valeur
    // aux1 = *a;
    // *a = *b;
    // *b = aux1;
    // permutation avec adresse
    aux2 = a;
    a = b;
    b = aux2;
    printf("nouveau a : %d\n",*a);
    printf("nouveau b : %d\n",*b);
}
