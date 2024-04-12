#ifndef PERSONNE_H
#define PERSONNE_H

#pragma once

#include <string>
#include <vector>
#include <Contrat.h>

// Définition de la classe Personne
class Personne {
protected:
    std::string nom;        // Nom de la personne
    std::string adresse;    // Adresse de la personne
    std::string telephone;  // Numéro de téléphone de la personne
    std::vector <Contrat> contrats; // contrats de la personne
public:
    // Constructeur de la classe Personne
    Personne(std::string nom, std::string adresse, std::string telephone);

    // Destructeur de la classe Personne
    ~Personne();

    // Méthode pour afficher les informations de la personne
    void afficherInfos() const;

    // Méthodes accesseurs pour récupérer les attributs de la personne
    std::string getNom() const;
    std::string getAdresse() const;
    std::string getTelephone() const;
    std::vector<Contrat> getContrats() const;

    // Méthodes mutateurs pour modifier les attributs de la personne
    void setNom(std::string nom);
    void setAdresse(std::string adresse);
    void setTelephone(std::string telephone);
    void setContrats(Contrat contrats);
};

// Définition de la classe Client, qui hérite de Personne
class Client : public Personne {
public:
    // Constructeur de la classe Client
    Client(std::string nom, std::string adresse, std::string telephone);
};

// Définition de la classe Proprietaire, qui hérite de Personne
class Proprietaire : public Personne {
public:
    // Constructeur de la classe Proprietaire
    Proprietaire(std::string nom, std::string adresse, std::string telephone);
};

// Définition de la classe Locataire, qui hérite de Personne
class Locataire : public Personne {
public:
    // Constructeur de la classe Locataire
    Locataire(std::string nom, std::string adresse, std::string telephone);
};

#endif // PERSONNE_H
