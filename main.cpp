#include "BienImmobilier.h"
#include "Contrat.h"
#include "Transaction.h"
#include "Exception.h"
#include "utils.h"
#include "Personne.h"
#include "Agence.h"

int main() {
    // Exercice 1
    // std::cout << "Exercice 1" << std::endl;

    // BienImmobilier bien(12, "10 rue de la Maison", 150.5,"Loft" ,"A vendre");
    // Contrat contrat(1, "01-01-2023", "Vente", "Non-signé");
    // Personne personne("Stefen Doe", "17 rue de la Personne", "09877784321");
    // bien.afficherDetails();
    // bien.mettreAJourStatut("A louer");
    // bien.afficherDetails();
    // personne.afficherInfos();
    // contrat.afficherContrat();
    // contrat.signerContrat();
    // contrat.afficherContrat();

    // //exercice 2
    // std::cout << "\n\n" << std::endl;
    // std::cout << "Exercice 2" << std::endl;

    // Maison maison(1, "15 rue de la Maison", 1990.5, "A vendre");
    // Appartement appartement(2, "25 avenue de l'Appartement", 875.2, "A louer");
    // Terrain terrain(3, "35 rue du Terrain", 1000.0, "A vendre");
    Client client1("John Doe", "10 rue du Client", "0987654321");
    Proprietaire proprietaire1("Alice Brown", "30 rue du Proprietaire", "0987654321");
    Locataire locataire1("Bob White", "40 rue du Locataire", "1234567890");
    // client1.afficherInfos();
    // proprietaire1.afficherInfos();
    // locataire1.afficherInfos();

    // // Exercice 3
    // std::cout << "\n\n" << std::endl;
    // std::cout << "Exercice 3" << std::endl;
    // BienImmobilier* bien1 = new Maison(1, "10 rue de la Maison", 150.5, "A vendre");
    // BienImmobilier* bien2 = new Appartement(2, "20 avenue de l'Appartement", 600.2, "A louer");
    // BienImmobilier* bien3 = new Terrain(3, "30 rue du Terrain", 1000.0, "A vendre");
  
    // bien1->afficherDetails();
    // bien2->afficherDetails();
    // bien3->afficherDetails();


    // std::cout << "\n\n" << std::endl;
    // // Exercice 4
    // std::cout << "Exercice 4" << std::endl;
    // try {
    //     Transaction transaction1(1, -5000, "01-01-2023");
    //     transaction1.effectuerTransaction();
    // } catch (const Exception& e) {
    //     std::cerr << "Une exception a été levée: " << e.what() << std::endl;
    // }
    // try {
    //     Contrat contrat1(-1, "5000", "01-01-2023", "A vendre");
    // } catch (const Exception& e) {
    //     std::cerr << "Une exception a été levée: " << e.what() << std::endl;
    // }

    // std::cout << "\n\n" << std::endl;
    // // Exercice 5
    // std::cout << "Exercice 5" << std::endl;
    Maison maison1(1, "10 rue de la Maison", 150.5, "A vendre");
    Appartement appartement1(2, "20 avenue de l'Appartement", 80.2, "A louer");
    // Terrain terrain1(3, "30 rue du Terrain", 1000.0, "A vendre");
    // bool result = compareSurface<Maison, Appartement>(maison1, appartement1);
    // std::cout << "La maison a une plus grande surface que l'appartement: " << (result ? "true" : "false") << std::endl;
    // result = compareSurface<Maison, Terrain>(maison1, terrain1);
    // std::cout << "La maison a une plus grande surface que le terrain: " << (result ? "true" : "false") << std::endl;
    
    Agence agence;
    agence.AjouterBien(maison1);
    agence.AjouterBien(appartement1);
    agence.AjouterClient(client1);
    agence.AjouterClient(proprietaire1);
    Contrat contrat2(2, "01-01-2026", "Vente", "Non-signé");

    std::cout << "\n\n" << std::endl;
    std::cout << "Agence immobilière avant set contrat :" << std::endl;
    agence.afficherAgence();

    agence.creerContrat(client1, contrat2, maison1);

    std::cout << "\n\n" << std::endl;
    std::cout << "Agence immobilière après set contrat :" << std::endl;
    agence.afficherAgence();
    std::cout << "\n\nClient 1 info after set contrat:" << std::endl;
    client1.afficherInfos();
    std::cout << "\n\nProprietaire 1 info after set contrat:" << std::endl;
    proprietaire1.afficherInfos();
    // delete bien1;
    // delete bien2;
    // delete bien3;
    return 0;

}
