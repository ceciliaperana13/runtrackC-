//tableau nommé “tab” et contenant les chaînes suivantes : “radar”, “hello”, “lvel”, “stats”, “world”.

#include <iostream>
#include <string>

int main() {
    std::string tab[] = {"radar", "hello", "lvel", "stats", "world"};
    const int taille = sizeof(tab) / sizeof(tab[0]);

    std::cout << "Contenu du tableau : " << std::endl;
    for (int i = 0; i < taille; i++) {
        std::cout << tab[i] << std::endl;
    }

    // Vérification des palindromes
    std::cout << "\nPalindromes dans le tableau : " << std::endl;
    for (int i = 0; i < taille; i++) {
        std::string mot = tab[i];
        std::string motInverse = std::string(mot.rbegin(), mot.rend());

        if (mot == motInverse) {
            std::cout << mot << " est un palindrome." << std::endl;
        }
    }
    return 0;
}