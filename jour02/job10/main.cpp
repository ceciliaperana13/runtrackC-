//de calculer la racine carrée d’un nombre réel donné par l’utilisateur. Votre fonction devra refuser les valeurs négatives. Le programme s’arrêtera seulement si la valeur d'entrée est égale à 0.
#include <iostream>
#include <cmath>

int main() {
    double number;

    do {
        std::cout << "Entrez un nombre réel (0 pour quitter) : ";
        std::cin >> number;

        if (number < 0) {
            std::cout << "svp positif" << std::endl;
        } else if (number > 0) {
            double result = sqrt(number);
            std::cout << "La racine carrée de " << number << " est: " << result << std::endl;
        }

    } while (number != 0);

    return 0;
}