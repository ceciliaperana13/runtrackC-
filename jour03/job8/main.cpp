//l’utilisateur d'entrer une chaîne de caractère et place les lettres dans un tableau nommé tab. Le caractère de fin de la chaîne est ‘\0’.
#include <iostream>

int main() {
    char tab[100];      // tableau qui contiendra la chaîne
    int i = 0;
    char c;

    std::cout << "Entrez une chaîne : ";

    // Lecture caractère par caractère jusqu'à appui sur Entrée
    while (true) {
        c = std::cin.get();   // lit un caractère

        if (c == '\n') {      // fin de la saisie
            break;
        }

        tab[i] = c;
        i++;
    }

    tab[i] = '\0'; // caractère de fin de chaîne

    std::cout << "Contenu du tableau : " << tab << std::endl;

    return 0;
}
