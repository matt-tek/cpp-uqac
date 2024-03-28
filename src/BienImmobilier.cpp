#include "BienImmobilier.h"

BienImmobilier::BienImmobilier(int id, std::string adresse, double surface, std::string type, std::string statut)
    : id(id), adresse(adresse), surface(surface), type(type), statut(statut) {}

void BienImmobilier::afficherDetails() {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Adresse: " << adresse << std::endl;
    std::cout << "Surface: " << surface << std::endl;
    std::cout << "Type: " << type << std::endl;
    std::cout << "Statut: " << statut << std::endl;
}
BienImmobilier::~BienImmobilier() {
    std::cout << "ID: " << id << "détruite" << std::endl;
}

void BienImmobilier::mettreAJourStatut(std::string nouveauStatut) {
    statut = nouveauStatut;
}

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

Maison::Maison(int id, std::string adresse, double surface, std::string statut)
    : BienImmobilier(id, adresse, surface, "Maison", statut) {}

Appartement::Appartement(int id, std::string adresse, double surface, std::string statut)
    : BienImmobilier(id, adresse, surface, "Appartement", statut) {}

Terrain::Terrain(int id, std::string adresse, double surface, std::string statut)
    : BienImmobilier(id, adresse, surface, "Terrain", statut) {}