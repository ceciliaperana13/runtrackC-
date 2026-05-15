#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <string>

class Joueur {
private:
    int x;
    int y;
    std::string nom;

public:
    // - Constructeurs -
    Joueur();                                 // défaut
    Joueur(int px, int py);                   // x, y
    Joueur(int px, int py, std::string pnom); // x, y, nom

    // - Getters -
    int getX() const;
    int getY() const;
    std::string getNom() const;

    // - Setters utilisant this -
    void setX(int px);
    void setY(int py);
    void setNom(const std::string& pnom);

    // - Méthodes utilisant this -
    void deplacer(int dx, int dy);
    void teleporter(int nx, int ny);   // nouvelle méthode
    void renommer(const std::string& nouveauNom); // nouvelle méthode

    void afficher() const;
};

#endif
