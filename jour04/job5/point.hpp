#ifndef POINT_HPP
#define POINT_HPP

struct Point {
    int x;
    int y;
};

void afficherPoint(Point* p);
void modifierPoint(Point* p, int newX, int newY);

#endif
