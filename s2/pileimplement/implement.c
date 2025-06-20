#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

int main() {
    pile *p = creerpile();
    empiler(p,10);
    empiler(p,20);
    empiler(p,30);
    printf("%d\n",sizepile(p));
    printf("%d\n",depiler(p));
    printf("%d",consulter(p));
    affichepile(p);
    videpile(p);
    emptypile(p);
    return 0;
}
