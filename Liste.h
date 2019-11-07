#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED

#include "produit.h"

#define MAXPROD 100

typedef struct
{
    Produit prods[MAXPROD];
    int nb;
}Liste;

void init_Liste(Liste* l);
void afficher_Liste(Liste l);
int produit_existe(Liste l, char* code);
void ajouter_produit(Liste* l);
void supprimer_produitIndice(Liste* l, int indice);
void supprimer_produitCode(Liste* l);
void acheter_prod(Liste* l);
void vendre_prod(Liste* l);





#endif
