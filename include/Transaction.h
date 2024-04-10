#ifndef TRANSACTION_H
#define TRANSACTION_H

#pragma once

#include <string>
#include <iostream>

// Définition de la classe Transaction
class Transaction {
private:
    int idTransaction;          // Identifiant de la transaction
    double montant;             // Montant de la transaction
    std::string dateTransaction;    // Date de la transaction

public:
    // Constructeur de la classe Transaction
    Transaction(int idTransaction, double montant, std::string dateTransaction);

    // Destructeur de la classe Transaction
    ~Transaction();

    // Méthode pour effectuer la transaction
    void effectuerTransaction();

    // Méthodes getters pour récupérer les attributs de la transaction
    int getIdTransaction() const;
    double getMontant() const;
    std::string getDateTransaction() const;

    // Méthodes setters pour modifier les attributs de la transaction
    void setIdTransaction(int idTransaction);
    void setMontant(double montant);
    void setDateTransaction(std::string dateTransaction);
};

#endif // TRANSACTION_H
