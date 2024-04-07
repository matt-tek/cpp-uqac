#include "Contrat.h"
#include "Exception.h"

Contrat::Contrat(int idContrat, std::string date, std::string typeContrat, std::string termesContrat) {
//    Rajouter une gestion d'eereur a l'aide de la class Exception
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
    this->idContrat = idContrat;
    this->date = date;
    this->typeContrat = typeContrat;
    this->termesContrat = termesContrat;
}

Contrat::~Contrat() {}

void Contrat::afficherContrat() const {
    std::cout << "ID Contrat: " << idContrat << std::endl;
    std::cout << "Date: " << date << std::endl;
    std::cout << "Type de Contrat: " << typeContrat << std::endl;
    std::cout << "Termes du Contrat: " << termesContrat << std::endl;
}

void Contrat::signerContrat() {
    std::cout << "Le contrat a été signé." << std::endl;
}

int Contrat::getIdContrat() const {
    return idContrat;
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

void Contrat::setIdContrat(int idContrat) {
    this->idContrat = idContrat;
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
