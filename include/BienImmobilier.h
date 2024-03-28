#ifndef BIENIMMOBILIER_H
#define BIENIMMOBILIER_H

#pragma once

#include <string>
#include <iostream>

class BienImmobilier {
protected:
    int id;
    std::string adresse;
    double surface;
    std::string type;
    std::string statut;

public:
    BienImmobilier(int id, std::string adresse, double surface, std::string type, std::string statut);
    ~BienImmobilier();
    virtual void afficherDetails() const;
    void mettreAJourStatut(std::string nouveauStatut);

    int getId() const;
    std::string getAdresse() const;
    double getSurface() const;
    std::string getType() const;
    std::string getStatut() const;

    void setId(int id);
    void setAdresse(std::string adresse);
    void setSurface(double surface);
    void setType(std::string type);
    void setStatut(std::string statut);
};

class Maison : public BienImmobilier {
public:
    Maison(int id, std::string adresse, double surface, std::string statut);
    void afficherDetails() const override;

};

class Appartement : public BienImmobilier {
public:
    Appartement(int id, std::string adresse, double surface, std::string statut);
    void afficherDetails() const override;

};

class Terrain : public BienImmobilier {
public:
    Terrain(int id, std::string adresse, double surface, std::string statut);
    void afficherDetails() const override;
};

#endif // BIENIMMOBILIER_H
