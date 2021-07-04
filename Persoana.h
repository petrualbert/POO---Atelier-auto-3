#ifndef POO___ATELIER_AUTO_PERSOANA_H
#define POO___ATELIER_AUTO_PERSOANA_H

#include <string>
#include <ostream>
#include <iostream>

class Persoana {
protected:
    std::string m_nume;
    int m_varsta;
public:
    Persoana();
    Persoana(const std::string &mNume, int mVarsta);

    const std::string &getMNume() const;

    void setMNume(const std::string &mNume);

    int getMVarsta() const;

    void setMVarsta(int mVarsta);

    friend std::ostream &operator<<(std::ostream &os, const Persoana &persoana);

    virtual void afiseazaDetalii();
};


#endif //POO___ATELIER_AUTO_PERSOANA_H
