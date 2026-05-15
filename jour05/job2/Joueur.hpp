// avec constructeurs,getters, et setters
#ifndef JOUEUR_HPP
#define JOUEUR_HPP

class Joueur {
private:
    int x;
    int y;

public:
    // Constructeurs
    Joueur();              // constructeur par défaut
    Joueur(int px, int py); // constructeur paramétré

    // Setters
    void setX(int px);
    void setY(int py);

    // Getters
    int getX() const;
    int getY() const;

    // Méthodes
    void afficherPosition() const;
    void deplacer(int dx, int dy);
};

#endif
