#ifndef POO___ATELIER_AUTO_REPARATIE_H
#define POO___ATELIER_AUTO_REPARATIE_H

#include "Masina.h"
#include <string>
#include "Mecanic.h"
#include "Atelier.h"
#include <vector>
#include <ostream>

class Reparatie {
private:
    std::shared_ptr<Masina> m_masina;
    std::shared_ptr<Mecanic> m_mecanic;
    std::shared_ptr<Atelier> m_atelier;
    int m_pret_total;
    std::vector<std::string> m_componente;
    bool m_plataEfectuata = false;

public:
    Reparatie(const std::shared_ptr<Masina> &mMasina, const std::shared_ptr<Mecanic> &mMecanic,
              const std::shared_ptr<Atelier> &mAtelier, int mPretTotal, const std::vector<std::string> &mComponente,
              bool mPlataEfectuata);


    const std::shared_ptr<Masina> &getMMasina() const;

    void setMMasina(const std::shared_ptr<Masina> &mMasina);

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

    friend std::ostream &operator<<(std::ostream &os, const Reparatie &reperatie);
};


#endif //POO___ATELIER_AUTO_REPARATIE_H
