//vérifie que l’utilisateur a bien tapé une heure sous le format : “XXhXX”.
#include <iostream>
#include <regex>

int main() {
    std::string input;
    std::regex timePattern(R"(^\d{2}h\d{2}$)");

    std::cout << "Entrez une heure au format XXhXX : ";
    std::cin >> input;

    if (std::regex_match(input, timePattern)) {
        std::cout << "Format d'heure valide." << std::endl;
    } else {
        std::cout << "Format d'heure invalide. Veuillez entrer au format XXhXX." << std::endl;
    }

    return 0;
}