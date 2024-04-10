#ifndef CONTRAT_H
#define CONTRAT_H

#pragma once

#include <string>
#include <iostream>

// Définition de la classe Contrat
class Contrat {
private:
    int idContrat;              // Identifiant du contrat
    std::string date;           // Date du contrat
    std::string typeContrat;    // Type de contrat
    std::string termesContrat;  // Termes du contrat

public:
    // Constructeur de la classe Contrat
    Contrat(int idContrat, std::string date, std::string typeContrat, std::string termesContrat);

    // Destructeur virtuel de la classe Contrat
    virtual ~Contrat();

    // Méthode pour afficher les détails du contrat
    void afficherContrat() const;

    // Méthode pour signer le contrat
    void signerContrat();

    // Méthodes accesseurs pour récupérer les attributs du contrat
    int getIdContrat() const;
    std::string getDate() const;
    std::string getTypeContrat() const;
    std::string getTermesContrat() const;

    // Méthodes mutateurs pour modifier les attributs du contrat
    void setIdContrat(int idContrat);
    void setDate(std::string date);
    void setTypeContrat(std::string typeContrat);
    void setTermesContrat(std::string termesContrat);
};

#endif // CONTRAT_H
