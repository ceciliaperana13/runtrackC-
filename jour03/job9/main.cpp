//deux chaînes de caractères en paramètre, entré par l’utilisateur, et retourne vrai si la première chaîne est incluse dans la deuxième, sinon retourne faux.

#include <iostream>
#include <string>

bool estIncluse(const std::string& a, const std::string& b) {
    return b.find(a) != std::string::npos;
}

int main() {
    std::string chaine1, chaine2;

    std::cout << "Entrez la première chaîne : ";
    std::getline(std::cin, chaine1);

    std::cout << "Entrez la deuxième chaîne : ";
    std::getline(std::cin, chaine2);

    if (estIncluse(chaine1, chaine2)) {
        std::cout << "Vrai" << std::endl;
    } else {
        std::cout << "Faux" << std::endl;
    }

    return 0;
}
//b.find(a) cherche la chaîne a dans b.

//Si elle est trouvée → retourne sa position.

//Si elle n’est pas trouvée → retourne std::string::npos.