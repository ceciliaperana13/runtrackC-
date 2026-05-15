//tries les deux dans l’ordre lexicographique (ordre alphabétique)
#include <iostream>
#include <string>

int main() {
    std::string string;
    std::string string2 = "Bonjour";

    std::cout << "Entrez une chaîne : ";
    std::getline(std::cin, string);

    // Tri lexicographique correct
    if (string.compare(string2) < 0) {
        std::cout << string << std::endl;
        std::cout << string2 << std::endl;
    } else {
        std::cout << string2 << std::endl;
        std::cout << string << std::endl;
    }

    return 0;
}

//"Bonjour" est la chaîne de référence.

//On compare string et string2 avec l’opérateur <= qui fait une comparaison lexicographique (ordre alphabétique).

//On affiche les deux dans l’ordre alphabétique.
//majuscules sont considérées comme plus petites que les minuscules, donc "Bonjour" sera toujours affiché avant une chaîne commençant par une lettre majuscule.