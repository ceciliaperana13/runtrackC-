#include <iostream>
#include "point.hpp"

void afficherPoint(Point* p) {
    std::cout << "x = " << p->x << ", y = " << p->y << std::endl;
}

void modifierPoint(Point* p, int newX, int newY) {
    p->x = newX;   // accès via opérateur de déréférencement implicite (->)
    p->y = newY;
}
