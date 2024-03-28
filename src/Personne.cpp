#include "Personne.h"
#include <iostream>

Personne::Personne(std::string nom, std::string adresse, std::string telephone)
    : nom(nom), adresse(adresse), telephone(telephone) {}

void Personne::afficherInfos() const {
    std::cout << "Nom: " << nom << std::endl;
    std::cout << "Adresse: " << adresse << std::endl;
    std::cout << "Téléphone: " << telephone << std::endl;
}

std::string Personne::getNom() const {
    return nom;
}

Personne::~Personne() {}

std::string Personne::getAdresse() const {
    return adresse;
}

std::string Personne::getTelephone() const {
    return telephone;
}

void Personne::setNom(std::string nom) {
    this->nom = nom;
}

void Personne::setAdresse(std::string adresse) {
    this->adresse = adresse;
}

void Personne::setTelephone(std::string telephone) {
    this->telephone = telephone;
}

Client::Client(std::string nom, std::string adresse, std::string telephone)
    : Personne(nom, adresse, telephone) {}

Proprietaire::Proprietaire(std::string nom, std::string adresse, std::string telephone)
    : Personne(nom, adresse, telephone) {}

Locataire::Locataire(std::string nom, std::string adresse, std::string telephone)
    : Personne(nom, adresse, telephone) {}