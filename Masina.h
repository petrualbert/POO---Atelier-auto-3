#ifndef POO___ATELIER_AUTO_MASINA_H
#define POO___ATELIER_AUTO_MASINA_H

#include "Client.h"
#include <string>
#include <ostream>

class Masina {
private:
    Client* m_posesor;
    std::string marca;
    std::string model;
    int an_fabricatie;
    int kilometraj;

public:
    Masina(Client *mPosesor, const std::string &marca, const std::string &model, int anFabricatie, int kilometraj);

    friend std::ostream &operator<<(std::ostream &os, const Masina &masina);

    Client *getMPosesor() const;

    void setMPosesor(Client *mPosesor);

    const std::string &getMarca() const;

    void setMarca(const std::string &marca);

    const std::string &getModel() const;

    void setModel(const std::string &model);

    int getAnFabricatie() const;

    void setAnFabricatie(int anFabricatie);

    int getKilometraj() const;

    void setKilometraj(int kilometraj);
};


#endif //POO___ATELIER_AUTO_MASINA_H
