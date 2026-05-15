// l'utulisateur saisise une liste de destinations de voyages + temps de vol

#include <iostream>
#include <string>
#include <vector>

struct Destination {
    std::string nom;
    float tempsVol;
};

int main() {
    std::vector<Destination*> liste;  // conteneur de pointeurs

    int nb;
    std::cout << "Combien de destinations voulez-vous saisir ? ";
    std::cin >> nb;

    for (int i = 0; i < nb; i++) {
        Destination* d = new Destination;

        std::cout << "\nDestination " << i + 1 << std::endl;
        std::cout << "Nom : ";
        std::cin >> d->nom;

        std::cout << "Temps de vol depuis Marseille (en heures) : ";
        std::cin >> d->tempsVol;

        liste.push_back(d);
    }

    // --- AFFICHAGE ---
    std::cout << "\n== Destinations enregistrées ==" << std::endl;
    for (auto d : liste) {
        std::cout << d->nom << " - " << d->tempsVol << "h" << std::endl;
    }

    // --- MODIFICATION ---
    std::cout << "\nModification : ajouter 0.5h à chaque temps de vol." << std::endl;
    for (auto d : liste) {
        d->tempsVol += 0.5f;
    }

    // --- AFFICHAGE APRÈS MODIFICATION ---
    std::cout << "\n== Après modification ==" << std::endl;
    for (auto d : liste) {
        std::cout << d->nom << " - " << d->tempsVol << "h" << std::endl;
    }

    // --- LIBÉRATION MÉMOIRE ---
    for (auto d : liste) {
        delete d;
    }

    return 0;
}
