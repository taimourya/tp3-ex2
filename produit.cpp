#include <iostream>
#include "produit.h"
#include <string.h>


Produit lire_produit()
{
    Produit p;
    std::cout << "code : ";
    std::cin >> p.code;
    std::cout << "intituler : ";
    std::cin >> p.intituler;
    p.qte = 0;
    return p;
}
void afficher_produit(Produit p)
{
    std::cout << "code : " << p.code << std::endl;
    std::cout << "intituler : " << p.intituler << std::endl;
    std::cout << "qte : " << p.qte << std::endl;
}
bool cmp_prodPerCode(Produit p, char *code)
{
    if(strcmp(p.code, code)==0)
        return true;
    return false;
}
bool cmp_produit(Produit p1, Produit p2)
{
    return cmp_prodPerCode(p1, p2.code);
}
void ajout_qte(Produit* p, int qte)
{
    p->qte += qte;
}
void supp_qte(Produit* p, int qte)
{
    p->qte -= qte;
    if(p->qte<0)
        p->qte=0;
}
