#include "Agence.h"
#include "BienImmobilier.h"
#include "Personne.h"

Agence::Agence() {}
Agence::~Agence() {}

void Agence::AjouterBien(BienImmobilier bien) {
        this->biens.push_back(bien);
}

void Agence::ajouterClient(const Client &client) {
    this->clients.push_back(client);
}

void Agence::afficherAgence() {
    std::cout << "Liste des biens immobiliers:" << std::endl;
    for (BienImmobilier bien : biens) {
        bien.afficherDetails();
    }
    std::cout << "Liste des CLIENT :" << std::endl;
    for (Client client : this->clients) {
        client.afficherInfos();
    }
    std::cout << "Liste des contrats:" << std::endl;
    for (Contrat contrat : contrats) {
        contrat.afficherContrat();
    }
    std::cout << "Liste des transactions:" << std::endl;
    for (Transaction transaction : transactions) {
        std::cout << "id de la transaction: " << transaction.getIdTransaction() << std::endl;
        std::cout << "montant de la transaction: " << transaction.getMontant() << std::endl;
        std::cout << "date de la transaction: " << transaction.getDateTransaction() << std::endl;
    }
}

// void Agence::creerContrat(Client &client, Contrat &contrat, BienImmobilier bien, Proprietaire &proprietaire) {
//     contrat.setIdBien(bien.getId());
//     client.setContrats(contrat);
//     proprietaire.setContrats(contrat);
//     this->contrats.push_back(contrat);  
// }

void Agence::creerContrat(Client &client, BienImmobilier bien, Proprietaire &proprietaire) {
    int id = this->contrats.size() + 1;
    Contrat *contrat = new Contrat(id, "01-01-2026", "Vente", "Non-signé");

    contrat->setIdBien(bien.getId());
    contrat->signerContrat();
    proprietaire.setContrats(*contrat);
    client.setContrats(*contrat);
    this->contrats.push_back(*contrat);
    this->enregistrerTransaction(contrat->getIdContrat());
}

void Agence::enregistrerTransaction(const int &idContrat) {
    int id = this->transactions.size() + 1;
    for (Contrat contrat : this->contrats) {
        if (contrat.getIdContrat() == idContrat) {
            Transaction *transaction = new Transaction(id, 5000, "01-01-2023");
            transaction->effectuerTransaction();
            this->transactions.push_back(*transaction);
        }
    }
}
