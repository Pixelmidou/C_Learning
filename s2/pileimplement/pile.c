#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "pile.h"

pile* creerpile() {
    pile *p = malloc(sizeof(pile));
    p->sommet = NULL;
    return p;
}

int emptypile(pile *p) {
    if (p->sommet == NULL) {
        printf("\npile vide\n");
        assert(0);
    }
    return 0;
}

void empiler(pile *p, int newval) {
    node* newnode = malloc(sizeof(node));
    newnode->val = newval;
    newnode->next = p->sommet;
    p->sommet = newnode;
}

int depiler(pile *p) {
    emptypile(p);
    node* sommetbackup = p->sommet;
    int valbackup = p->sommet->val;
    p->sommet = p->sommet->next;
    free(sommetbackup);
    return valbackup;
}

int consulter(pile *p) {
    emptypile(p);
    return p->sommet->val;
}

int sizepile(pile *p) {
    int i = 0;
    node *ptr = p->sommet;
    while (ptr != NULL) {
        ptr = ptr->next;
        i++;
    }
    return i;
}

void affichepile(pile *p) {
    emptypile(p);
    node *ptr = p->sommet;
    printf("\n");
    while (ptr != NULL) {
        printf("%d ",ptr->val);
        ptr = ptr->next;
    }
}

void videpile(pile *p) {
    emptypile(p);
    node *ptr = p->sommet;
    while (ptr != NULL) {
        node *aux = ptr;
        ptr = ptr->next;
        free(aux);
    }
    p->sommet = NULL;
}
