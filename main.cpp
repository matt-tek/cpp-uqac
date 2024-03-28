#include "BienImmobilier.h"

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

    return 0;
}
