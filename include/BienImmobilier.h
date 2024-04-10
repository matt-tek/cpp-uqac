#ifndef BIENIMMOBILIER_H
#define BIENIMMOBILIER_H

#pragma once

#include <string>
#include <iostream>

// Définition de la classe BienImmobilier
class BienImmobilier {
protected:
    int id;                 // Identifiant du bien immobilier
    std::string adresse;    // Adresse du bien immobilier
    double surface;         // Surface du bien immobilier
    std::string type;       // Type du bien immobilier (maison, appartement, terrain)
    std::string statut;     // Statut du bien immobilier (disponible, vendu, loué)

public:
    // Constructeur de la classe BienImmobilier
    BienImmobilier(int id, std::string adresse, double surface, std::string type, std::string statut);

    // Destructeur virtuel de la classe BienImmobilier
    virtual ~BienImmobilier() {}

    // Méthode virtuelle pour afficher les détails du bien immobilier
    virtual void afficherDetails() const;

    // Méthode pour mettre à jour le statut du bien immobilier
    void mettreAJourStatut(std::string nouveauStatut);

    // Méthodes accesseur pour récupérer les attributs du bien immobilier
    int getId() const;
    std::string getAdresse() const;
    double getSurface() const;
    std::string getType() const;
    std::string getStatut() const;

    // Méthodes mutateur pour modifier les attributs du bien immobilier
    void setId(int id);
    void setAdresse(std::string adresse);
    void setSurface(double surface);
    void setType(std::string type);
    void setStatut(std::string statut);
};

// Définition de la classe Maison, qui hérite de BienImmobilier
class Maison : public BienImmobilier {
public:
    // Constructeur de la classe Maison
    Maison(int id, std::string adresse, double surface, std::string statut);

    // Méthode pour afficher les détails spécifiques d'une maison
    void afficherDetails() const override;
};

// Définition de la classe Appartement, qui hérite de BienImmobilier
class Appartement : public BienImmobilier {
public:
    // Constructeur de la classe Appartement
    Appartement(int id, std::string adresse, double surface, std::string statut);

    // Méthode pour afficher les détails spécifiques d'un appartement
    void afficherDetails() const override;
};

// Définition de la classe Terrain, qui hérite de BienImmobilier
class Terrain : public BienImmobilier {
public:
    // Constructeur de la classe Terrain
    Terrain(int id, std::string adresse, double surface, std::string statut);

    // Méthode pour afficher les détails spécifiques d'un terrain
    void afficherDetails() const override;
};

#endif // BIENIMMOBILIER_H
