#include "Agence.h"
#include "BienImmobilier.h"
#include "Personne.h"

Agence::Agence() {}
Agence::~Agence() {}

void Agence::AjouterBien(BienImmobilier bien) {
        this->biens.push_back(bien);
}

void Agence::AjouterClient(Personne personne) {
        this->personnes.push_back(personne);
}

void Agence::afficherAgence() {
    std::cout << "Liste des biens immobiliers:" << std::endl;
    for (BienImmobilier bien : biens) {
        bien.afficherDetails();
    }
    std::cout << "Liste des personnes:" << std::endl;
    for (Personne personne : personnes) {
        personne.afficherInfos();
    }
    std::cout << "Liste des contrats:" << std::endl;
    for (Contrat contrat : contrats) {
        contrat.afficherContrat();
    }
}

void Agence::creerContrat(Client &client, const Contrat &contrat, BienImmobilier bien) {
    client.setContrats(contrat);
    // contrat.setBien(bien);
    this->contrats.push_back(contrat);  
}