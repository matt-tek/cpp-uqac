# cpp-uqac
c++ project 


## Exercice 4
Création d’une class pour géré les exception, cette class contient une string pour géré le messages ainsi qu’une fonction pour l’afficher.
Cette class dérive de std::exception.
```hpp
class Exception : public std::exception {
private:
    std::string message;
public:
    Exception(const std::string& message) : message(message) {}
    virtual const char* what() const throw() {
        return message.c_str();
    }
};
```
J’ai rajouter par la suite une gestion d’erreur pour renvoyer une erreur si le montant est négatif.
De meme pour la création de contat
```cpp
if (idContrat < 0) {
    throw Exception("L'ID du contrat doit être positif.");
}
if (date.empty()) {
    throw Exception("La date du contrat ne doit pas être vide.");
}
if (typeContrat.empty()) {
    throw Exception("Le type de contrat ne doit pas être vide.");
}
if (termesContrat.empty()) {
    throw Exception("Les termes du contrat ne doivent pas être vides.");
}
```

```cpp
if (montant < 0) {
    throw Exception("Le montant de la transaction doit être positif.");
}
```
Ces erreurs sont récupérée dans le main dans un try/catch.

J’ai Réalisé 2 teste, 1 avec un montant négatif lors de la transaction et un deuxième avec un ID négatif lors de la création d’un contrat
```cpp
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
```

## Exercice 5
J’ai crée dans un premier temps un template de fonction qui peut nous permettre de comparer plusieurs biens sur leur surface.
```cpp
template <typename T1, typename T2>
bool compareSurface(T1& bien1, T2& bien2) {
    return bien1.getSurface() > bien2.getSurface();
}
```
C’est a dire que on peut comparé par exemple la surface d’une maison et d’un appartement ou d’un appartement et un terrain.

J’ai réalisé 2 test, un premier ou je compare la surface entre un appartement et une maison et un deuxième avec la comparaison entre une maison et un terrain.
```cpp
Maison maison1(1, "10 rue de la Maison", 150.5, "A vendre");
Appartement appartement1(2, "20 avenue de l'Appartement", 80.2, "A louer");
Terrain terrain1(3, "30 rue du Terrain", 1000.0, "A vendre");
bool result = compareSurface<Maison, Appartement>(maison1, appartement1);
std::cout << "La maison a une plus grande surface que l'appartement: " << (result ? "true" : "false") << std::endl;
result = compareSurface<Maison, Terrain>(maison1, terrain1);
std::cout << "La maison a une plus grande surface que le terrain: " << (result ? "true" : "false") << std::endl;
```
