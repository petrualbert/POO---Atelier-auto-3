//
// Created by madalin on 04.07.2021.
//

#include "ComponentaFactory.h"

ComponentaAuto::ComponentaAuto(int nrSuruburi, bool ulei, const std::string &material) : nr_suruburi(nrSuruburi),
                                                                                         ulei(ulei),
                                                                                         material(material) {}

int ComponentaAuto::getNrSuruburi() const {
    return nr_suruburi;
}

void ComponentaAuto::setNrSuruburi(int nrSuruburi) {
    nr_suruburi = nrSuruburi;
}

bool ComponentaAuto::isUlei() const {
    return ulei;
}

void ComponentaAuto::setUlei(bool ulei) {
    ComponentaAuto::ulei = ulei;
}

const std::string &ComponentaAuto::getMaterial() const {
    return material;
}

void ComponentaAuto::setMaterial(const std::string &material) {
    ComponentaAuto::material = material;
}
