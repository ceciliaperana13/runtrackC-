//les pointeurs sont des variables qui contiennent l’adresse mémoire d’une autre variable. Ils permettent de manipuler directement la mémoire et sont utilisés pour créer des structures de données dynamiques, gérer la mémoire, et faciliter la communication entre fonctions.
#include <iostream>


int main() {
    int a = 10;          // variable normale
    int* ptr = &a;       // pointeur qui contient l'adresse de a

    std::cout << "La valeur de a : " << a << std::endl;           // affiche 10
    std::cout << "L'adresse de a : " << &a << std::endl;          // affiche l'adresse de a
    std::cout << "La valeur du pointeur ptr : " << ptr << std::endl; // affiche l'adresse de a
    std::cout << "La valeur pointée par ptr : " << *ptr << std::endl; // affiche 10

    return 0;
}