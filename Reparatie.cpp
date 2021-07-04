#include "Reparatie.h"
#include <iostream>
#include "Masina.h"

template <typename T>
void Reparatie<T>::taxeazaClientul() {
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



template <typename T>
int Reparatie<T>::getMPretTotal() const {
    return m_pret_total;
}


template <typename T>
void Reparatie<T>::setMPretTotal(int mPretTotal) {
    m_pret_total = mPretTotal;
}


template <typename T>
const std::vector<std::string> &Reparatie<T>::getMComponente() const {
    return m_componente;
}


template <typename T>
void Reparatie<T>::setMComponente(const std::vector<std::string> &mComponente) {
    m_componente = mComponente;
}


template <typename T>
bool Reparatie<T>::isMPlataEfectuata() const {
    return m_plataEfectuata;
}

template <typename T>
void Reparatie<T>::setMPlataEfectuata(bool mPlataEfectuata) {
    m_plataEfectuata = mPlataEfectuata;
}




template <typename T>
const std::shared_ptr<T> &Reparatie<T>::getMMasina() const {
    return m_masina;
}


template <typename T>
void Reparatie<T>::setMMasina(const std::shared_ptr<T> &mMasina) {
    m_masina = mMasina;
}


template <typename T>
const std::shared_ptr<Mecanic> &Reparatie<T>::getMMecanic() const {
    return m_mecanic;
}


template <typename T>
void Reparatie<T>::setMMecanic(const std::shared_ptr<Mecanic> &mMecanic) {
    m_mecanic = mMecanic;
}


template <typename T>
const std::shared_ptr<Atelier> &Reparatie<T>::getMAtelier() const {
    return m_atelier;
}


template <typename T>
void Reparatie<T>::setMAtelier(const std::shared_ptr<Atelier> &mAtelier) {
    m_atelier = mAtelier;
}

template<class T>
Reparatie<T>::Reparatie(const std::shared_ptr<T> &mMasina, const std::shared_ptr<Mecanic> &mMecanic,
                        const std::shared_ptr<Atelier> &mAtelier, int mPretTotal,
                        const std::vector<std::string> &mComponente, bool mPlataEfectuata):m_masina(mMasina),
                                                                                           m_mecanic(mMecanic),
                                                                                           m_atelier(mAtelier),
                                                                                           m_pret_total(mPretTotal),
                                                                                           m_componente(mComponente),
                                                                                           m_plataEfectuata(
                                                                                                   mPlataEfectuata) {}



template class Reparatie<Masina>;