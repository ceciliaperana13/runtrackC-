//qui affiche le prix TTC de vos produits frais. Écrire un programme en C++ qui demande à l'utilisateur de taper le prix HT d'un kilo de carottes, le nombre de kilos de carottes, le taux de TVA (ex : 15 %). Le programme doit afficher le prix TTC d’une marchandise donnée.
#include <iostream>

int main() {
    double priceHT, tvaRate;
    int quantity;

    std::cout << "Entrez le prix HT d'un kilo de carottes: ";
    std::cin >> priceHT;

    std::cout << "Entrez le nombre de kilos de carottes: ";
    std::cin >> quantity;

    std::cout << "Entrez le taux de TVA (en pourcentage): ";
    std::cin >> tvaRate;

    double priceTTC = priceHT * quantity * (1 + tvaRate / 100);
    std::cout << "Le prix TTC des carottes est: " << priceTTC << " euros." << std::endl;

    return 0;
}