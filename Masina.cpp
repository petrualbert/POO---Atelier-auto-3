#include "Masina.h"


std::ostream &operator<<(std::ostream &os, const Masina &masina) {
//    os << "Masina are posesorul cu numele " << masina.m_posesor->getMNume() <<
//        "si este un " << masina.marca << " " << masina.model << " fabricat in anul " <<
//        masina.an_fabricatie << " efectuand " << masina.kilometraj << " km in total";
    os << "Masina" << masina.getMarca()  << " " << masina.getModel();
    return os;
}

Masina::Masina(Client *mPosesor, const std::string &marca, const std::string &model, int anFabricatie, int kilometraj)
        : m_posesor(mPosesor), marca(marca), model(model), an_fabricatie(anFabricatie), kilometraj(kilometraj) {}

Client *Masina::getMPosesor() const {
    return m_posesor;
}



const std::string &Masina::getMarca() const {
    return marca;
}

void Masina::setMarca(const std::string &marca) {
    Masina::marca = marca;
}

const std::string &Masina::getModel() const {
    return model;
}

void Masina::setModel(const std::string &model) {
    Masina::model = model;
}

int Masina::getAnFabricatie() const {
    return an_fabricatie;
}

void Masina::setAnFabricatie(int anFabricatie) {
    an_fabricatie = anFabricatie;
}

int Masina::getKilometraj() const {
    return kilometraj;
}

void Masina::setKilometraj(int kilometraj) {
    Masina::kilometraj = kilometraj;
}
