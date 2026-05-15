#include "Etudiant.hpp"

//Constructeur
Etudiant::Etudiant(const std::string& pnom,
                   const std::string& pprenom,
                   int page,
                   int pmatricule)
    : nom(pnom), prenom(pprenom), age(page), matricule(pmatricule)
{}

//GETTERS
std::string Etudiant::getNom() const { return nom; }
std::string Etudiant::getPrenom() const { return prenom; }
int Etudiant::getAge() const { return age; }
int Etudiant::getMatricule() const { return matricule; }

//SETTERS
void Etudiant::setNom(const std::string& pnom) { this->nom = pnom; }
void Etudiant::setPrenom(const std::string& pprenom) { this->prenom = pprenom; }
void Etudiant::setAge(int page) { this->age = page; }
void Etudiant::setMatricule(int pmatricule) { this->matricule = pmatricule; }

// AFFICHAGE
void Etudiant::afficher() const {
    std::cout << "Etudiant : " << prenom << " " << nom
              << " | Age : " << age
              << " | Matricule : " << matricule
              << std::endl;
}
