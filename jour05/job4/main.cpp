#include <iostream>
#include "Joueur.hpp"

int main() {

    // 1 Constructeur par défaut
    Joueur j1;
    j1.afficher();

    // 2 Constructeur avec x et y
    Joueur j2(10, 20);
    j2.afficher();

    // 3 Constructeur avec x, y et nom
    Joueur j3(5, 15, "Cecilia");
    j3.afficher();

    // Utilisation des méthodes utilisant this
    j3.deplacer(3, -2);
    j3.afficher();

    j3.teleporter(100, 200);
    j3.afficher();

    j3.renommer("SuperCecilia");
    j3.afficher();

    return 0;
}
