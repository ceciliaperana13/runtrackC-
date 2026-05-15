//supprime toutes les voyelles de la chaîne de caractères suivantes : “vive la plateforme !“
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string texte = "vive la plateforme !";

    // Supprimer les voyelles
    texte.erase(std::remove_if(texte.begin(), texte.end(),
        [](char c) {
            char lower = std::tolower(c);
            return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
        }), texte.end());

    std::cout << texte << std::endl;

    return 0;
}
