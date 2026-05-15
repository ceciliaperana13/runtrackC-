#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>
#include <iostream>

class Personne {
protected:
    std::string nom;
    int vie;
    float defense;

public:
    Personne(const std::string& pnom, int pvie, float pdef);

    virtual void afficher() const;
    virtual void subirDegats(int degats);

    virtual ~Personne() {}
};

#endif
