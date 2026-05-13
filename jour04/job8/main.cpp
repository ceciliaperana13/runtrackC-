//un tableau avec les valeurs suivantes : 2019, “La Plateforme”, 3.14,“Étudiants”. Afficher les adresses et valeurs de chaque élément du tableau.
#include <iostream>
#include <string>

int main() {
    int entier = 2019;
    std::string texte1 = "La Plateforme";
    float flottant = 3.14f;
    std::string texte2 = "Étudiants";

    // Tableau de pointeurs génériques
    void* tab[4] = { &entier, &texte1, &flottant, &texte2 };

    std::cout << "=== Adresses et valeurs ===" << std::endl;

    // Élément 0 : int
    std::cout << "Element 0 | Adresse : " << tab[0]
              << " | Valeur : " << *(int*)tab[0] << std::endl;

    // Élément 1 : string
    std::cout << "Element 1 | Adresse : " << tab[1]
              << " | Valeur : " << *(std::string*)tab[1] << std::endl;

    // Élément 2 : float
    std::cout << "Element 2 | Adresse : " << tab[2]
              << " | Valeur : " << *(float*)tab[2] << std::endl;

    // Élément 3 : string
    std::cout << "Element 3 | Adresse : " << tab[3]
              << " | Valeur : " << *(std::string*)tab[3] << std::endl;

    return 0;
}
