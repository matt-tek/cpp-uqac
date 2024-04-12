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
std::vector<Personne> personnes;
public:
    Agence(/* args */);
    ~Agence();
    void AjouterBien(BienImmobilier bien); 
    void AjouterClient(Personne personne);
    void enregistrerTransaction(Transaction transaction);
    void afficherAgence();
    void creerContrat(const std::vector<Personne> &Personne, Contrat contrat, BienImmobilier bien);
};

#endif // AGENCE_H
