#include <stdio.h>

int main() {
    int s,m,h;
    printf("donner un nombre de secondes : ");
    scanf("%d",&s);
    printf("%d heures %d minutes %d secondes", s/3600, (s%3600)/60, s%60);
}
