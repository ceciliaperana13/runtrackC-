#include "Contact.hpp"

// --- Setter ---
void Contact::setNumero(int nouveau) {
    numero = nouveau;
}

// --- Affichage ---
void Contact::afficher() const {
    std::cout << "Nom : " << nom
              << " | Numéro : " << numero
              << std::endl;
}
