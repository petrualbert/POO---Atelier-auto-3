#include "Reparatie.h"
#include <iostream>

void Reparatie::taxeazaClientul() {
    if (!m_plataEfectuata)
    {
        auto creditClient = this->getMMasina()->getMPosesor()->getCreditCurent();
        if (creditClient > m_pret_total)
        {
            creditClient = creditClient - m_pret_total;
            this->getMMasina()->getMPosesor()->setCreditCurent(creditClient);
            this->getMMasina()->getMPosesor()->adaugaPlata();
            m_plataEfectuata = true;

            this->getMAtelier()->setMCont(this->getMAtelier()->getMCont() + m_pret_total);
        }

    }
}

std::ostream &operator<<(std::ostream &os, const Reparatie &reparatie) {
    os << "Reparatie " << "realizata de mecanicul " << reparatie.m_mecanic->getMNume() << " pentru masina "
    << reparatie.m_masina->getMarca() << " " << reparatie.m_masina->getModel() << " " <<
    "cu posesorul " << reparatie.m_masina->getMPosesor()->getMNume() << " costa " << reparatie.m_pret_total << " pentru " <<
    reparatie.m_componente.size() << " componente";
    return os;
}


int Reparatie::getMPretTotal() const {
    return m_pret_total;
}

void Reparatie::setMPretTotal(int mPretTotal) {
    m_pret_total = mPretTotal;
}

const std::vector<std::string> &Reparatie::getMComponente() const {
    return m_componente;
}

void Reparatie::setMComponente(const std::vector<std::string> &mComponente) {
    m_componente = mComponente;
}

bool Reparatie::isMPlataEfectuata() const {
    return m_plataEfectuata;
}

void Reparatie::setMPlataEfectuata(bool mPlataEfectuata) {
    m_plataEfectuata = mPlataEfectuata;
}


Reparatie::Reparatie(const std::shared_ptr<Masina> &mMasina, const std::shared_ptr<Mecanic> &mMecanic,
                     const std::shared_ptr<Atelier> &mAtelier, int mPretTotal,
                     const std::vector<std::string> &mComponente, bool mPlataEfectuata) : m_masina(mMasina),
                                                                                          m_mecanic(mMecanic),
                                                                                          m_atelier(mAtelier),
                                                                                          m_pret_total(mPretTotal),
                                                                                          m_componente(mComponente),
                                                                                          m_plataEfectuata(
                                                                                                  mPlataEfectuata) {}

const std::shared_ptr<Masina> &Reparatie::getMMasina() const {
    return m_masina;
}

void Reparatie::setMMasina(const std::shared_ptr<Masina> &mMasina) {
    m_masina = mMasina;
}

const std::shared_ptr<Mecanic> &Reparatie::getMMecanic() const {
    return m_mecanic;
}

void Reparatie::setMMecanic(const std::shared_ptr<Mecanic> &mMecanic) {
    m_mecanic = mMecanic;
}

const std::shared_ptr<Atelier> &Reparatie::getMAtelier() const {
    return m_atelier;
}

void Reparatie::setMAtelier(const std::shared_ptr<Atelier> &mAtelier) {
    m_atelier = mAtelier;
}



