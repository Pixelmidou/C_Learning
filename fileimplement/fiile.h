typedef struct node {
    int val;
    struct node* next;
} node;

typedef struct fiile {
    node* head;
    node* tail;
} fiile;

fiile* creerfiile();
int emptyfiile(fiile *f);
void emfiiler(fiile *f, int newval);
int defiiler(fiile *f);
int consulter(fiile *f);
int sizefiile(fiile *f);
void affichefiile(fiile *f);
void videfiile(fiile *f);
