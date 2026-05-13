//variable nommée “x” qui contient l’entier 12. À l’aide des références modifiées “x”.
#include <iostream>

int main() {
    int x = 12;      // variable initiale
    int& ref = x;    // ref est une référence vers x

    std::cout << "Avant modification : x = " << x << std::endl;

    ref = 30;        // modification via la référence

    std::cout << "Après modification : x = " << x << std::endl;

    return 0;
}
