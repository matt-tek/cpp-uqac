#include "Contrat.h"
#include "Exception.h"

// Constructeur de la classe Contrat
Contrat::Contrat(int idContrat, std::string date, std::string typeContrat, std::string termesContrat) {
    // Gestion des erreurs avec la classe Exception
    if (idContrat < 0) {
        throw Exception("L'ID du contrat doit être positif.");
    }
    if (date.empty()) {
        throw Exception("La date du contrat ne doit pas être vide.");
    }
    if (typeContrat.empty()) {
        throw Exception("Le type de contrat ne doit pas être vide.");
    }
    if (termesContrat.empty()) {
        throw Exception("Les termes du contrat ne doivent pas être vides.");
    }
    // Initialisation des attributs du contrat
    this->idContrat = idContrat;
    this->date = date;
    this->typeContrat = typeContrat;
    this->termesContrat = termesContrat;
}

// Destructeur de la classe Contrat
Contrat::~Contrat() {}

// Méthode pour afficher les détails du contrat
void Contrat::afficherContrat() const {
    std::cout << "ID Contrat: " << idContrat << std::endl;
    std::cout << "Date: " << date << std::endl;
    std::cout << "Type de Contrat: " << typeContrat << std::endl;
    std::cout << "Termes du Contrat: " << termesContrat << std::endl;
    std::cout << "ID Bien: " << idBien << std::endl;
}

// Méthode pour signer le contrat
void Contrat::signerContrat() {
    std::cout << "Le contrat a été signé." << std::endl;
    this->setTermesContrat("Signé");
}

// Méthodes accesseur pour récupérer les attributs du contrat
int Contrat::getIdContrat() const {
    return idContrat;
}

int Contrat::getIdBien() const {
    return this->idBien;
}

std::string Contrat::getDate() const {
    return date;
}

std::string Contrat::getTypeContrat() const {
    return typeContrat;
}

std::string Contrat::getTermesContrat() const {
    return termesContrat;
}

// Méthodes mutateurs pour modifier les attributs du contrat
void Contrat::setIdContrat(int idContrat) {
    this->idContrat = idContrat;
}

void Contrat::setIdBien(int idBien) {
    this->idBien = idBien;
}

void Contrat::setDate(std::string date) {
    this->date = date;
}

void Contrat::setTypeContrat(std::string typeContrat) {
    this->typeContrat = typeContrat;
}

void Contrat::setTermesContrat(std::string termesContrat) {
    this->termesContrat = termesContrat;
}
