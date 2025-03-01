#include <stdio.h>
#include <stdlib.h>

typedef struct point {
    char c;
    int x,y;
} point;

void saisir(point *p) {
    printf("saisir c : ");
    scanf("%c",&p->c);
    printf("\n");
    printf("saisir x : ");
    scanf("%d",&p->x);
    printf("\n");
    printf("saisir y : ");
    scanf("%d",&p->y);
    printf("\n");
}

void afficher1(point p) {
    printf("%c[%d:%d]\n",p.c,p.x,p.y);
}
void afficher2(point *p) {
    printf("%c[%d:%d]\n",p->c,p->x,p->y);
}

int main() {
    point p;
    saisir(&p);
    afficher1(p);
    afficher2(&p);
    return 0;
}
