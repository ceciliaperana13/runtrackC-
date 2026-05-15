#include <iostream>
#include <vector>

#include "Guerrier.hpp"
#include "Mage.hpp"
#include "Archer.hpp"

int main() {

    // Pointeurs polymorphes
    std::vector<Personne*> personnages;

    personnages.push_back(new Guerrier("Thorin"));
    personnages.push_back(new Mage("Gandalf"));
    personnages.push_back(new Archer("Legolas"));

    std::cout << "=== Personnages créés ===" << std::endl;
    for (auto p : personnages) {
        p->afficher();
    }

    std::cout << "\n=== Attaque sur tous les personnages ===" << std::endl;
    for (auto p : personnages) {
        p->subirDegats(20);
        p->afficher();
    }

    // Libération mémoire
    for (auto p : personnages) {
        delete p;
    }

    return 0;
}
