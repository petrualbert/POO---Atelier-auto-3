#ifndef POO___ATELIER_AUTO_ATELIER_H
#define POO___ATELIER_AUTO_ATELIER_H


#include <string>
#include "Angajat.h"
#include <vector>
#include <ostream>
#include <memory>

class Atelier {
private:
    std::string m_nume_atelier;
    int m_cont;
    float m_rating = 0;
    std::vector<int> m_note_primite;
    std::vector<std::shared_ptr<Angajat>> m_angajati;

public:
    Atelier(const std::string &mNumeAtelier, int mCont, const std::vector<std::shared_ptr<Angajat>> &mAngajati);

    Atelier(const Atelier& ob);

    Atelier& operator=(const Atelier& ob);

    void platesteSalariiAngajati();

    void concediazaAngajat(const Angajat& angajat);

    void adaugaAngajat(Angajat& angajat);

    ~Atelier();

    friend std::ostream &operator<<(std::ostream &os, const Atelier &atelier);

    const std::string &getMNumeAtelier() const;

    void setMNumeAtelier(const std::string &mNumeAtelier);

    int getMCont() const;

    void setMCont(int mCont);

    float getMRating() const;

    void setMRating(float mRating);

    const std::vector<int> &getMNotePrimite() const;

    void setMNotePrimite(const std::vector<int> &mNotePrimite);

    const std::vector<std::shared_ptr<Angajat>> &getMAngajati() const;

    void setMAngajati(const std::vector<std::shared_ptr<Angajat>> &mAngajati);

    void adaugaRating(int nota);



};


#endif //POO___ATELIER_AUTO_ATELIER_H
