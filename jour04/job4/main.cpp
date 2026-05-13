//le main
#include <iostream>
#include <iostream>
#include "pointeurs.hpp"

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    int* p1 = &a;
    int* p2 = &b;
    int* p3 = &c;

    std::cout << "Valeurs initiales :" << std::endl;
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    afficherViaDereferencement(p1, p2, p3);

    modifierViaDereferencement(p1, p2, p3);

    std::cout << "\nValeurs après modification via pointeurs :" << std::endl;
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    return 0;
}

