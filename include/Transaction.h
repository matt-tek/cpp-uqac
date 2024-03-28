#ifndef TRANSACTION_H
#define TRANSACTION_H

#pragma once
#include <string>
#include <iostream>

class Transaction {
private:
    int idTransaction;
    double montant;
    std::string dateTransaction;

public:
    Transaction(int idTransaction, double montant, std::string dateTransaction);
    ~Transaction();
    void effectuerTransaction();

    int getIdTransaction() const;
    double getMontant() const;
    std::string getDateTransaction() const;

    void setIdTransaction(int idTransaction);
    void setMontant(double montant);
    void setDateTransaction(std::string dateTransaction);
};

#endif // TRANSACTION_H
