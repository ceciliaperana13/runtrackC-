#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string texte = "vive la plateforme !";

    // Transformation en majuscules
    std::transform(texte.begin(), texte.end(), texte.begin(), ::toupper);

    // Rouge = \033[31m   |   Reset = \033[0m
    std::cout << "\033[31m" << texte << "\033[0m" << std::endl;

    return 0;
}