//calcule la longueur de la chaîne de caractère “Vive la plateforme !” et affiche “La taille est 20”.
#include <iostream>
#include <string>

int main() {
    std::string texte = "Vive la plateforme !";
    size_t taille = texte.length();
    std::cout << "La taille est " << taille << std::endl;
    return 0;
}