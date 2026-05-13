//Écrire une calculatrice simple permettant les opérations arithmétiques de base (addition, soustraction, multiplication, division).
#include <iostream>


int main() {
    double num1, num2;
    char operation;

    std::cout << "Entrez le premier nombre: ";
    std::cin >> num1;

    std::cout << "Entrez l'opération (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Entrez le deuxième nombre: ";
    std::cin >> num2;

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Erreur: Division par zéro!" << std::endl;
                return 1; // Terminer le programme avec une erreur
            }
            break;
        default:
            std::cout << "Opération invalide!" << std::endl;
            return 1; // Terminer le programme avec une erreur
    }

    std::cout << "Le résultat de " << num1 << " " << operation << " " << num2 << " est: " << result << std::endl;

    return 0;
}