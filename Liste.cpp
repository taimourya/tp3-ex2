#include <iostream>
#include "Liste.h"

void init_Liste(Liste* l)
{
    l->nb=0;
}
void afficher_Liste(Liste l)
{
    int i;
    for(i=0; i<l.nb; ++i)
    {
        afficher_produit(l.prods[i]);
        std::cout << std::endl;
    }
}
int produit_existe(Liste l, char* code)
{
    int i;
    for(i=0; i<l.nb; ++i)
    {
        if(cmp_prodPerCode(l.prods[i], code))
            return i;
    }
    return -1;
}
void ajouter_produit(Liste* l)
{
    Produit p;
    if(l->nb>=MAXPROD)
    {
        std::cout << "taille max" << std::endl;
        return;
    }
    do
    {
        p = lire_produit();
    }while(produit_existe(*l, p.code) != -1);
    l->prods[l->nb++] = p;
}
void supprimer_produitIndice(Liste* l, int indice)
{
    int i;
    for(i=indice; i<l->nb-1; ++i)
        l->prods[i] = l->prods[i+1];
    l->nb--;
}
void supprimer_produitCode(Liste* l)
{
    char code[9];
    int i;
    int fin = 0;
    std::cout << "code a supprimer : ";
    std::cin >> code;
    for(i=0; i<l->nb && !fin; ++i)
    {
        if(cmp_prodPerCode(l->prods[i], code))
        {
            supprimer_produitIndice(l, i);
            fin = 1;
        }
    }
    if(fin == 1)
        std::cout << "produit supprimer" << std::endl;
    else
        std::cout << "produit introuvable" << std::endl;

}
void acheter_prod(Liste* l)
{
    char code[9];
    int qte;
    int indice;
    std::cout << "code : ";
    std::cin >> code;
    std::cout << "qte : ";
    std::cin >> qte;
    indice = produit_existe(*l, code);
    if(indice == -1)
    {
        std::cout << "existe pas" << std::endl;
    }
    else
    {
        ajout_qte(&l->prods[indice], qte);
    }
}
void vendre_prod(Liste* l)
{
    char code[9];
    int qte;
    int indice;
    std::cout << "code : ";
    std::cin >> code;
    std::cout << "qte : ";
    std::cin >> qte;
    indice = produit_existe(*l, code);
    if(indice == -1)
    {
        std::cout << "existe pas" << std::endl;
    }
    else
    {
        supp_qte(&l->prods[indice], qte);
    }
}























