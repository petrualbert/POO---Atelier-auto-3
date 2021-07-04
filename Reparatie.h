#ifndef POO___ATELIER_AUTO_REPARATIE_H
#define POO___ATELIER_AUTO_REPARATIE_H


#include <string>
#include "Mecanic.h"
#include "Atelier.h"
#include <vector>
#include <ostream>

template <class T>
class Reparatie {
private:
    std::shared_ptr<T> m_masina;
    std::shared_ptr<Mecanic> m_mecanic;
    std::shared_ptr<Atelier> m_atelier;
    int m_pret_total;
    std::vector<std::string> m_componente;
    bool m_plataEfectuata = false;

public:
    Reparatie(const std::shared_ptr<T> &mMasina, const std::shared_ptr<Mecanic> &mMecanic,
              const std::shared_ptr<Atelier> &mAtelier, int mPretTotal, const std::vector<std::string> &mComponente,
              bool mPlataEfectuata);


    const std::shared_ptr<T> &getMMasina() const;

    void setMMasina(const std::shared_ptr<T> &mMasina);

    const std::shared_ptr<Mecanic> &getMMecanic() const;

    void setMMecanic(const std::shared_ptr<Mecanic> &mMecanic);

    const std::shared_ptr<Atelier> &getMAtelier() const;

    void setMAtelier(const std::shared_ptr<Atelier> &mAtelier);

    int getMPretTotal() const;

    void setMPretTotal(int mPretTotal);

    const std::vector<std::string> &getMComponente() const;

    void setMComponente(const std::vector<std::string> &mComponente);

    bool isMPlataEfectuata() const;

    void setMPlataEfectuata(bool mPlataEfectuata);


    void taxeazaClientul();

    friend std::ostream &operator<<(std::ostream &os, const Reparatie<T> &reparatie)
    {
        os << "Reparatie " << "realizata de mecanicul " << reparatie.m_mecanic->getMNume() << " pentru "
           << *reparatie.m_masina << " " <<
           "cu posesorul " << reparatie.m_masina->getMPosesor()->getMNume() << " costa " << reparatie.m_pret_total << " pentru " <<
           reparatie.m_componente.size() << " componente";
        return os;
    }
};


#endif //POO___ATELIER_AUTO_REPARATIE_H
