#include "BienImmobilier.h"
#include "Contrat.h"
#include "Transaction.h"
#include "Exception.h"
#include "utils.h"

int main() {
    BienImmobilier* bien1 = new Maison(1, "10 rue de la Maison", 150.5, "A vendre");
    BienImmobilier* bien2 = new Appartement(2, "20 avenue de l'Appartement", 80.2, "A louer");
    BienImmobilier* bien3 = new Terrain(3, "30 rue du Terrain", 1000.0, "A vendre");

    bien1->afficherDetails();
    bien2->afficherDetails();
    bien3->afficherDetails();

    delete bien1;
    delete bien2;
    delete bien3;

    std::cout << "\n\n" << std::endl;
    // Exercice 4
    std::cout << "Exercice 4" << std::endl;
    try {
        Transaction transaction1(1, -5000, "01-01-2023");
        transaction1.effectuerTransaction();
    } catch (const Exception& e) {
        std::cerr << "Une exception a été levée: " << e.what() << std::endl;
    }
    try {
        Contrat contrat1(-1, "5000", "01-01-2023", "A vendre");
    } catch (const Exception& e) {
        std::cerr << "Une exception a été levée: " << e.what() << std::endl;
    }

    std::cout << "\n\n" << std::endl;
    // Exercice 5
    std::cout << "Exercice 5" << std::endl;
    Maison maison1(1, "10 rue de la Maison", 150.5, "A vendre");
    Appartement appartement1(2, "20 avenue de l'Appartement", 80.2, "A louer");
    Terrain terrain1(3, "30 rue du Terrain", 1000.0, "A vendre");
    bool result = compareSurface<Maison, Appartement>(maison1, appartement1);
    std::cout << "La maison a une plus grande surface que l'appartement: " << (result ? "true" : "false") << std::endl;
    result = compareSurface<Maison, Terrain>(maison1, terrain1);
    std::cout << "La maison a une plus grande surface que le terrain: " << (result ? "true" : "false") << std::endl;
    return 0;
}
