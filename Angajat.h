#ifndef POO___ATELIER_AUTO_ANGAJAT_H
#define POO___ATELIER_AUTO_ANGAJAT_H

#include <string>
#include <ostream>
#include <memory>
#include "Persoana.h"


class Angajat: public Persoana {
protected:
    std::string m_denumire_functie;
    int m_salariu;
    int m_vechime_ani;
public:
    Angajat();
    Angajat(std::shared_ptr<Angajat> ob);

    Angajat(const std::string &mNume, int mVarsta, const std::string &mDenumireFunctie, int mSalariu, int mVechimeAni);

    const std::string &getMDenumireFunctie() const;

    Angajat& operator=(const Angajat& ob);

    void setMDenumireFunctie(const std::string &mDenumireFunctie);

    int getMSalariu() const;

    void setMSalariu(int mSalariu);

    int getMVechimeAni() const;

    void setMVechimeAni(int mVechimeAni);

    friend std::ostream &operator<<(std::ostream &os, const Angajat &angajat);

    virtual void afiseazaDetalii();
};


#endif //POO___ATELIER_AUTO_ANGAJAT_H
