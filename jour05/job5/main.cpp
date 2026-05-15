#include <iostream>
#include "Etudiant.hpp"

int main() {

    //  Création d'étudiants avec le constructeur en liste d'initialisation 
    Etudiant e1("Dupont", "Alice", 21, 10234);
    Etudiant e2("Martin", "Lucas", 19, 20456);
    Etudiant e3("Cordial", "Cecilia", 22, 30987);

    std::cout << " Étudiants créés " << std::endl;
    e1.afficher();
    e2.afficher();
    e3.afficher();

    //  Modification via setters 
    std::cout << "\n Modifications via setters " << std::endl;

    e1.setNom("Durand");
    e1.setAge(22);

    e2.setPrenom("Luc");
    e2.setMatricule(55555);

    e3.setNom("Cecilia");
    e3.setPrenom("Super");
    e3.setAge(23);

    e1.afficher();
    e2.afficher();
    e3.afficher();

    //  Lecture via getters 
    std::cout << "\n Lecture via getters " << std::endl;

    std::cout << "Nom de e1 : " << e1.getNom() << std::endl;
    std::cout << "Prénom de e2 : " << e2.getPrenom() << std::endl;
    std::cout << "Âge de e3 : " << e3.getAge() << std::endl;
    std::cout << "Matricule de e3 : " << e3.getMatricule() << std::endl;

    return 0;
}
