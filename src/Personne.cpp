#include "Personne.h"
#include <iostream>

// Constructeur de la classe Personne
Personne::Personne(std::string nom, std::string adresse, std::string telephone)
    : nom(nom), adresse(adresse), telephone(telephone) {}

// Méthode pour afficher les informations de la personne
void Personne::afficherInfos() const {
    std::cout << "Nom: " << nom << std::endl;
    std::cout << "Adresse: " << adresse << std::endl;
    std::cout << "Téléphone: " << telephone << std::endl;
    std::cout << "Contrats: " << std::endl;
    for (Contrat contrat : contrats) {
        contrat.afficherContrat();
    }
}

// Méthodes accesseurs pour récupérer les attributs de la personne
std::string Personne::getNom() const {
    return nom;
}

std::string Personne::getAdresse() const {
    return adresse;
}

std::string Personne::getTelephone() const {
    return telephone;
}

std::vector <Contrat> Personne::getContrats() const {
    return contrats;
}

// Méthodes mutateurs pour modifier les attributs de la personne
void Personne::setNom(std::string nom) {
    this->nom = nom;
}

void Personne::setAdresse(std::string adresse) {
    this->adresse = adresse;
}

void Personne::setTelephone(std::string telephone) {
    this->telephone = telephone;
}

void Personne::setContrats(Contrat contrats) {
    this->contrats.push_back(contrats);
}

// Destructeur de la classe Personne
Personne::~Personne() {}

// Constructeur de la classe Client, héritant de Personne
Client::Client(std::string nom, std::string adresse, std::string telephone)
    : Personne(nom, adresse, telephone) {}

// Constructeur de la classe Proprietaire, héritant de Personne
Proprietaire::Proprietaire(std::string nom, std::string adresse, std::string telephone)
    : Personne(nom, adresse, telephone) {}

// Constructeur de la classe Locataire, héritant de Personne
Locataire::Locataire(std::string nom, std::string adresse, std::string telephone)
    : Personne(nom, adresse, telephone) {}
