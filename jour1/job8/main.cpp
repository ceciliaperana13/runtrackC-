//l'utilisateur d'entrer une année, puis détermine si cette année est bissextile ou non. Par exemple, les années 2020,2024 et 2028 sont bissextiles, mais les années 1900, 2100, 2200 ne le sont pas.
#include <iostream>


int main() {
    int year;

    std::cout << "Entrez une année: ";
    std::cin >> year;

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (isLeapYear) {
        std::cout << year << " est une annee bissextile." << std::endl;
    } else {
        std::cout << year << " n'est pas une annee bissextile." << std::endl;
    }

    return 0;
}