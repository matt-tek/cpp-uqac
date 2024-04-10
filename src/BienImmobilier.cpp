#include "BienImmobilier.h"

// Constructeur de la classe BienImmobilier
BienImmobilier::BienImmobilier(int id, std::string adresse, double surface, std::string type, std::string statut)
    : id(id), adresse(adresse), surface(surface), type(type), statut(statut) {}

// Méthode pour afficher les détails du bien immobilier
void BienImmobilier::afficherDetails() const {
    std::cout << "Bien immobilier: " << type << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Adresse: " << adresse << std::endl;
    std::cout << "Surface: " << surface << std::endl;
    std::cout << "Statut: " << statut << std::endl;
}

// Méthode pour mettre à jour le statut du bien immobilier
void BienImmobilier::mettreAJourStatut(std::string nouveauStatut) {
    statut = nouveauStatut;
}

// Méthodes accesseurs pour récupérer les attributs du bien immobilier
int BienImmobilier::getId() const {
    return id;
}

std::string BienImmobilier::getAdresse() const {
    return adresse;
}

double BienImmobilier::getSurface() const {
    return surface;
}

std::string BienImmobilier::getType() const {
    return type;
}

std::string BienImmobilier::getStatut() const {
    return statut;
}

// Méthodes mutateurs pour modifier les attributs du bien immobilier
void BienImmobilier::setId(int id) {
    this->id = id;
}

void BienImmobilier::setAdresse(std::string adresse) {
    this->adresse = adresse;
}

void BienImmobilier::setSurface(double surface) {
    this->surface = surface;
}

void BienImmobilier::setType(std::string type) {
    this->type = type;
}

void BienImmobilier::setStatut(std::string statut) {
    this->statut = statut;
}

// Constructeur de la classe Maison
Maison::Maison(int id, std::string adresse, double surface, std::string statut)
    : BienImmobilier(id, adresse, surface, "Maison", statut) {}

// Méthode pour afficher les détails spécifiques d'une maison
void Maison::afficherDetails() const {
    BienImmobilier::afficherDetails();
    std::cout << "Type: Maison" << std::endl;
}

// Constructeur de la classe Appartement
Appartement::Appartement(int id, std::string adresse, double surface, std::string statut)
    : BienImmobilier(id, adresse, surface, "Appartement", statut) {}

// Méthode pour afficher les détails spécifiques d'un appartement
void Appartement::afficherDetails() const {
    BienImmobilier::afficherDetails();
    std::cout << "Type: Appartement" << std::endl;
}

// Constructeur de la classe Terrain
Terrain::Terrain(int id, std::string adresse, double surface, std::string statut)
    : BienImmobilier(id, adresse, surface, "Terrain", statut) {}

// Méthode pour afficher les détails spécifiques d'un terrain
void Terrain::afficherDetails() const {
    BienImmobilier::afficherDetails();
    std::cout << "Type: Terrain" << std::endl;
}
