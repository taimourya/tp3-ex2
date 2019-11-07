#ifndef PRODUIT_H_INCLUDED
#define PRODUIT_H_INCLUDED


typedef struct
{
    char code[9];
    char intituler[99];
    int qte;
}Produit;


Produit lire_produit();
void afficher_produit(Produit p);
bool cmp_prodPerCode(Produit p, char *code);
bool cmp_produit(Produit p1, Produit p2);
void ajout_qte(Produit* p, int qte);
void supp_qte(Produit* p, int qte);





#endif
