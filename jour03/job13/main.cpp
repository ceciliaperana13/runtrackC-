//qui fusionne deux tableaux triés en gardant l’ordre croissant et le stocke dans un troisième tableau.
#include <iostream>
#include <vector>

std::vector<int> fusionnerTableaux(const std::vector<int>& tab1, const std::vector<int>& tab2) {
    std::vector<int> resultat;
    size_t i = 0, j = 0;

    while (i < tab1.size() && j < tab2.size()) {
        if (tab1[i] < tab2[j]) {
            resultat.push_back(tab1[i]);
            i++;
        } else {
            resultat.push_back(tab2[j]);
            j++;
        }
    }

    // Ajouter les éléments restants de tab1
    while (i < tab1.size()) {
        resultat.push_back(tab1[i]);
        i++;
    }

    // Ajouter les éléments restants de tab2
    while (j < tab2.size()) {
        resultat.push_back(tab2[j]);
        j++;
    }

    return resultat;
}

int main() {
    std::vector<int> tab1 = {1, 3, 5, 7};
    std::vector<int> tab2 = {2, 4, 6, 8};

    std::vector<int> resultat = fusionnerTableaux(tab1, tab2);

    std::cout << "Tableau fusionné : ";
    for (int val : resultat) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}