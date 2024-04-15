#ifndef AGENCE_H
#define AGENCE_H
#pragma once
#include <string>
#include <iostream>
#include "BienImmobilier.h"
#include "Personne.h"
#include "Contrat.h"
#include "Transaction.h"
#include <vector>

class Agence {
private:
    std::vector<BienImmobilier> biens;
    std::vector<Contrat> contrats;
    std::vector<Transaction> transactions;
    std::vector<Client> clients;
    std::vector<Proprietaire> proprietaires;
    std::vector<Locataire> locataires;
public:
    Agence(/* args */);
    ~Agence();
    void AjouterBien(BienImmobilier bien); 
    void ajouterClient(const Client &client);
    void ajouterProprietaire(const Proprietaire &proprietaire);
    void ajouterLocataire(const Locataire &locataire);
    void enregistrerTransaction(const int &idContrat);
    void afficherAgence();
    void creerContrat(Client &client, Contrat &contrat, BienImmobilier bien);
    // void creerContrat(Client &client, Contrat &contrat, BienImmobilier bien, Proprietaire &proprietaire);
    void creerContrat(Client &client, BienImmobilier bien, Proprietaire &proprietaire);
};

#endif // AGENCE_H
