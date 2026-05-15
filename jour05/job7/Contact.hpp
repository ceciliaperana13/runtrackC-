#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
private:
    std::string nom;
    int numero;

public:
    //  Constructeur normal 
    Contact(const std::string& pnom, int pnumero)
        : nom(pnom), numero(pnumero)
    {}

    // Constructeur de copie 
    Contact(const Contact& autre)
        : nom(autre.nom), numero(autre.numero)
    {}

    //  Getters 
    std::string getNom() const { return nom; }
    int getNumero() const { return numero; }

    // Setters (définis dans le .cpp)
    void setNumero(int nouveau);

    // Affichage (défini dans le .cpp)
    void afficher() const;
};

#endif
