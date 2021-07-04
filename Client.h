#ifndef POO___ATELIER_AUTO_CLIENT_H
#define POO___ATELIER_AUTO_CLIENT_H


#include <string>
#include <ostream>
#include "Persoana.h"

class Client: public Persoana {

private:
    int plati_efectuate = 0;
    int credit_curent;

public:
    Client(const std::string &mNume, int mVarsta, int creditCurent);

    void adaugaPlata();

    int getPlatiEfectuate() const;

    void setPlatiEfectuate(int platiEfectuate);

    int getCreditCurent() const;

    void setCreditCurent(int creditCurent);

    friend std::ostream &operator<<(std::ostream &os, const Client &client);
};


#endif //POO___ATELIER_AUTO_CLIENT_H
