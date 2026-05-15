#include <iostream>
#include "pointeurs.hpp"

void afficherViaDereferencement(int* p1, int* p2, int* p3) {
    std::cout << "Valeurs via déréférencement :" << std::endl;
    std::cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << ", *p3 = " << *p3 << std::endl;
}

void modifierViaDereferencement(int* p1, int* p2, int* p3) {
    *p1 += 5;   // modification via pointeur
    *p2 -= 3;
    *p3 *= 2;
}
