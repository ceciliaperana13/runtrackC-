#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <string>

class Joueur {
private:
    int x;
    int y;
    std::string nom;

public:
    // --- Constructeurs ---
    Joueur();                        // constructeur par défaut
    Joueur(int px, int py);          // constructeur avec x et y
    Joueur(int px, int py, std::string pnom); // constructeur avec x, y, nom

    // --- Getters ---
    int getX() const;
    int getY() const;
    std::string getNom() const;

    // --- Setters ---
    void setX(int px);
    void setY(int py);
    void setNom(const std::string& pnom);

    // --- Méthodes ---
    void afficher() const;
    void deplacer(int dx, int dy);
};

#endif
