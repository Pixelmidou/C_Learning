#include <stdio.h>
#include <stdlib.h>
#include "fiile.h"

int main() {
    fiile *f = creerfiile();
    emfiiler(f,10);
    emfiiler(f,20);
    emfiiler(f,30);
    printf("%d\n",sizefiile(f));
    printf("%d\n",defiiler(f));
    printf("%d",consulter(f));
    affichefiile(f);
    videfiile(f);
    emptyfiile(f);
    return 0;
}
