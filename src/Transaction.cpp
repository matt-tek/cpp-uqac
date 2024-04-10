#include "Transaction.h"
#include "Exception.h"

// Constructeur de la classe Transaction
Transaction::Transaction(int idTransaction, double montant, std::string dateTransaction)
    : idTransaction(idTransaction), montant(montant), dateTransaction(dateTransaction) {}

// Destructeur de la classe Transaction
Transaction::~Transaction() {}

// Méthode pour effectuer une transaction
void Transaction::effectuerTransaction() {
    // Vérification du montant de la transaction
    if (montant < 0) {
        throw Exception("Montant de transaction ne peut pas être négatif");
    }
    // Affichage des détails de la transaction
    std::cout << "La transaction #" << idTransaction << " de montant " << montant << " a été effectuée le " << dateTransaction << std::endl;
}

// Méthodes accesseurs pour récupérer les attributs de la transaction
int Transaction::getIdTransaction() const {
    return idTransaction;
}

double Transaction::getMontant() const {
    return montant;
}

std::string Transaction::getDateTransaction() const {
    return dateTransaction;
}

// Méthodes mutateurs pour modifier les attributs de la transaction
void Transaction::setIdTransaction(int idTransaction) {
    this->idTransaction = idTransaction;
}

void Transaction::setMontant(double montant) {
    this->montant = montant;
}

void Transaction::setDateTransaction(std::string dateTransaction) {
    this->dateTransaction = dateTransaction;
}
