#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "fiile.h"

fiile* creerfiile() {
    fiile *f = malloc(sizeof(fiile));
    f->head = NULL;
    f->tail = NULL;
    return f;
}

int emptyfiile(fiile *f) {
    if (f->head == NULL && f->tail == NULL) {
        printf("\nfiile vide\n");
        assert(0);
    }
    return 0;
}

void emfiiler(fiile *f, int newval) {
    node* newnode = malloc(sizeof(node));
    newnode->val = newval;
    newnode->next = NULL;
    if (f->head == NULL && f->tail == NULL) {
        f->head = newnode;
        f->tail = newnode;
    } else {
        f->tail->next = newnode;
        f->tail = newnode;
    }
}

int defiiler(fiile *f) {
    emptyfiile(f);
    node* headbackup = f->head;
    int valbackup = f->head->val;
    f->head = f->head->next;
    if (f->head == NULL) {
        f->tail = NULL;
    }
    free(headbackup);
    return valbackup;
}

int consulter(fiile *f) {
    emptyfiile(f);
    return f->head->val;
}

int sizefiile(fiile *f) {
    int i = 0;
    node *ptr = f->head;
    while (ptr != NULL) {
        ptr = ptr->next;
        i++;
    }
    return i;
}

void affichefiile(fiile *f) {
    emptyfiile(f);
    node *ptr = f->head;
    printf("\n");
    while (ptr != NULL) {
        printf("%d ",ptr->val);
        ptr = ptr->next;
    }
}

void videfiile(fiile *f) {
    emptyfiile(f);
    node *ptr = f->head;
    while (ptr != NULL) {
        node *aux = ptr;
        ptr = ptr->next;
        free(aux);
    }
    f->head = NULL;
    f->tail = NULL;
}
