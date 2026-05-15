#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>
#include <iostream>

class Etudiant {
private:
    std::string nom;
    std::string prenom;
    int age;
    int matricule;

public:
    //  Constructeur avec liste d'initialisation 
    Etudiant(const std::string& pnom,
             const std::string& pprenom,
             int page,
             int pmatricule);

    //  Getters 
    std::string getNom() const;
    std::string getPrenom() const;
    int getAge() const;
    int getMatricule() const;

    //  Setters 
    void setNom(const std::string& pnom);
    void setPrenom(const std::string& pprenom);
    void setAge(int page);
    void setMatricule(int pmatricule);

    //  Méthode d'affichage 
    void afficher() const;
};

#endif
