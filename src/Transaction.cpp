#include "Transaction.h"

Transaction::Transaction(int idTransaction, double montant, std::string dateTransaction)
    : idTransaction(idTransaction), montant(montant), dateTransaction(dateTransaction) {}

Transaction::~Transaction() {}

void Transaction::effectuerTransaction() {
    std::cout << "La transaction #" << idTransaction << " de montant " << montant << " a été effectuée le " << dateTransaction << std::endl;
}

int Transaction::getIdTransaction() const {
    return idTransaction;
}

double Transaction::getMontant() const {
    return montant;
}

std::string Transaction::getDateTransaction() const {
    return dateTransaction;
}

void Transaction::setIdTransaction(int idTransaction) {
    this->idTransaction = idTransaction;
}

void Transaction::setMontant(double montant) {
    this->montant = montant;
}

void Transaction::setDateTransaction(std::string dateTransaction) {
    this->dateTransaction = dateTransaction;
}
