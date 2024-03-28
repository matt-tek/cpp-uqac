#ifndef PERSONNE_H
#define PERSONNE_H
#pragma once

#include <string>

class Personne {
protected:
    std::string nom;
    std::string adresse;
    std::string telephone;

public:
    Personne(std::string nom, std::string adresse, std::string telephone);
    ~Personne();
    void afficherInfos() const;

    std::string getNom() const;
    std::string getAdresse() const;
    std::string getTelephone() const;

    void setNom(std::string nom);
    void setAdresse(std::string adresse);
    void setTelephone(std::string telephone);
};
class Client : public Personne {
public:
    Client(std::string nom, std::string adresse, std::string telephone);
};

class Proprietaire : public Personne {
public:
    Proprietaire(std::string nom, std::string adresse, std::string telephone);
};

class Locataire : public Personne {
public:
    Locataire(std::string nom, std::string adresse, std::string telephone);
};

#endif // PERSONNE_H
