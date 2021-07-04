//
// Created by madalin on 04.07.2021.
//

#ifndef POO___ATELIER_AUTO_COMPONENTAFACTORY_H
#define POO___ATELIER_AUTO_COMPONENTAFACTORY_H

#include <string>

class ComponentaAuto
{
    int nr_suruburi;
    bool ulei;
    std::string material;
public:
    ComponentaAuto(int nrSuruburi, bool ulei, const std::string &material);

    int getNrSuruburi() const;

    void setNrSuruburi(int nrSuruburi);

    bool isUlei() const;

    void setUlei(bool ulei);

    const std::string &getMaterial() const;

    void setMaterial(const std::string &material);
};

class ComponentaFactory {
public:
    static ComponentaAuto Anvelopa() { return ComponentaAuto(45,false,"cauciuc");}
    static ComponentaAuto DiscFrana() { return ComponentaAuto(10, false, "fonta");}
    static ComponentaAuto FiltruUlei() { return ComponentaAuto(20, true, "carcasa metalica");}
};


#endif //POO___ATELIER_AUTO_COMPONENTAFACTORY_H
