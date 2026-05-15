#ifndef JOUEUR_HPP
#define JOUEUR_HPP

class Joueur {
private:
    int x;
    int y;

public:
    Joueur();                 // constructeur par défaut

    // Setters
    void setX(int px);
    void setY(int py);

    // Getters
    int getX() const;
    int getY() const;

    // Méthodes
    void initialiser(int px, int py);
    void afficherPosition() const;
    void deplacer(int dx, int dy);
};

#endif
