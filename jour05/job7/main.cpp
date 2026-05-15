#include <iostream>
#include "Contact.hpp"

int main() {

    // Création des contacts originaux
    Contact c1("Alice", 1111);
    Contact c2("Bob", 2222);
    Contact c3("Cecilia", 3333);

    std::cout << "=== Contacts originaux ===" << std::endl;
    c1.afficher();
    c2.afficher();
    c3.afficher();

    // Copies via constructeur de copie
    Contact copie1(c1);
    Contact copie2(c2);
    Contact copie3(c3);

    // Modification des copies
    copie1.setNumero(9001);
    copie2.setNumero(9002);
    copie3.setNumero(9003);

    std::cout << "\n=== Copies modifiées ===" << std::endl;
    copie1.afficher();
    copie2.afficher();
    copie3.afficher();

    std::cout << "\n=== Vérification : originaux inchangés ===" << std::endl;
    c1.afficher();
    c2.afficher();
    c3.afficher();

    return 0;
}
