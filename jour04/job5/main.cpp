#include <iostream>
#include "point.hpp"

int main() {
    Point p = {10, 20};

    Point* ptr = &p;   // pointeur vers la structure

    std::cout << "Valeurs initiales :" << std::endl;
    afficherPoint(ptr);

    // modification via pointeur
    modifierPoint(ptr, 50, 100);

    std::cout << "Valeurs après modification :" << std::endl;
    afficherPoint(ptr);

    return 0;
}
