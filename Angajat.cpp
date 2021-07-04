#include "Angajat.h"

Angajat::Angajat() : Persoana() {
    this->m_denumire_functie = "Fara functie";
    this->m_salariu = 0;
    this->m_vechime_ani = 0;
}

Angajat::Angajat(std::shared_ptr<Angajat> ob) {
    this->m_nume = ob->getMNume();
    this->m_salariu = ob->getMSalariu();
    this->m_varsta = ob->m_varsta;
    this->m_denumire_functie = ob->getMDenumireFunctie();
    this->m_vechime_ani = ob->getMVechimeAni();
}

Angajat& Angajat::operator=(const Angajat& ob)
{
    // Guard self assignment
    if (this == &ob)
        return *this;

    this->m_nume = ob.getMNume();
    this->m_salariu = ob.getMSalariu();
    this->m_denumire_functie = ob.getMDenumireFunctie();
    this->m_vechime_ani = ob.getMVechimeAni();

    return *this;
}



const std::string &Angajat::getMDenumireFunctie() const {
    return m_denumire_functie;
}

void Angajat::setMDenumireFunctie(const std::string &mDenumireFunctie) {
    m_denumire_functie = mDenumireFunctie;
}

int Angajat::getMSalariu() const {
    return m_salariu;
}

void Angajat::setMSalariu(int mSalariu) {
    m_salariu = mSalariu;
}

int Angajat::getMVechimeAni() const {
    return m_vechime_ani;
}

void Angajat::setMVechimeAni(int mVechimeAni) {
    m_vechime_ani = mVechimeAni;
}

Angajat::Angajat(const std::string &mNume, int mVarsta, const std::string &mDenumireFunctie, int mSalariu,
                 int mVechimeAni) : Persoana(mNume, mVarsta), m_denumire_functie(mDenumireFunctie), m_salariu(mSalariu),
                                    m_vechime_ani(mVechimeAni) {}

std::ostream &operator<<(std::ostream &os, const Angajat &angajat) {
    os << "Angajatul " << angajat.m_nume << " cu varsta de " << angajat.m_varsta << " are vechime de " << angajat.m_vechime_ani << " ani"
     << " salariu de " << angajat.m_salariu << " LEI " << " si are functia " << angajat.m_denumire_functie;
    return os;
}

void Angajat::afiseazaDetalii() {
        std::cout << "Angajatul " << this->m_nume << " cu varsta de " << this->m_varsta << " are vechime de " << this->m_vechime_ani << " ani"
                  << " salariu de " << this->m_salariu << " LEI " << " si are functia " << this->m_denumire_functie;
}
