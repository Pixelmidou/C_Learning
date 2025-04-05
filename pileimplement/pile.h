typedef struct node {
    int val;
    struct node* next;
} node;

typedef struct pile {
    node* sommet;
} pile;

pile* creerpile();
int emptypile(pile *p);
void empiler(pile *p, int newval);
int depiler(pile *p);
int consulter(pile *p);
int sizepile(pile *p);
void affichepile(pile *p);
void videpile(pile *p);
