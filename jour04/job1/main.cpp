//Créer une variable “number” contenant 2019. À l’aide d’un pointeur, afficher la valeur de “number”.
#include <iostream>

int main() {
    int number = 2019;
    int* ptr = &number;

    std::cout << "La valeur de 'number' est : " << *ptr << std::endl;

    return 0;
}

//number contient 2019

//ptr contient l’adresse de number

// *ptr permet de déréférencer le pointeur → donc d’accéder à la valeur

//l’affichage montre bien 2019
