#include <iostream>
#include <stdlib.h>
#include "Menu.h"
#include "Liste.h"


int choix_menu()
{
    int choix;
    system("cls");
    std::cout << "--------MENU-----------|" << std::endl;
    std::cout << "|1.ajouter un produit  |" << std::endl;
    std::cout << "|2.afficher la liste   |" << std::endl;
    std::cout << "|3.supprimer un produit|" << std::endl;
    std::cout << "|4.achter un produit   |" << std::endl;
    std::cout << "|5.vendre un produit   |" << std::endl;
    std::cout << "|6.Quitter             |" << std::endl;
    std::cout << "-----------------------|" << std::endl;
    std::cin >> choix;
    return choix;
}
void menu()
{
    int choix;
    Liste l;
    init_Liste(&l);

    do
    {
        choix = choix_menu();
        switch(choix)
        {
            case 1:
                ajouter_produit(&l);
                break;
            case 2:
                afficher_Liste(l);
                break;
            case 3:
                supprimer_produitCode(&l);
                break;
            case 4:
                acheter_prod(&l);
                break;
            case 5:
                vendre_prod(&l);
                break;
            case 6:
                break;
            default:
                std::cout << "choix introuvable" << std::endl;
        }
        if(choix!=6)
            system("PAUSE");
    }while(choix != 6);



}




















