#ifndef CONTRAT_H
#define CONTRAT_H

#include <string>
#include <iostream>

class Contrat {
private:
    int idContrat;
    std::string date;
    std::string typeContrat;
    std::string termesContrat;

public:
    Contrat(int idContrat, std::string date, std::string typeContrat, std::string termesContrat);
    ~Contrat();
    void afficherContrat() const;
    void signerContrat();

    int getIdContrat() const;
    std::string getDate() const;
    std::string getTypeContrat() const;
    std::string getTermesContrat() const;

    void setIdContrat(int idContrat);
    void setDate(std::string date);
    void setTypeContrat(std::string typeContrat);
    void setTermesContrat(std::string termesContrat);
};

#endif // CONTRAT_H
