#include "Client.h"

Client::Client(const std::string &mNume, int mVarsta, int creditCurent) : Persoana(mNume, mVarsta),
                                                                                              credit_curent(
                                                                                                      creditCurent) {}

int Client::getPlatiEfectuate() const {
    return plati_efectuate;
}

void Client::setPlatiEfectuate(int platiEfectuate) {
    plati_efectuate = platiEfectuate;
}

int Client::getCreditCurent() const {
    return credit_curent;
}

void Client::setCreditCurent(int creditCurent){
    credit_curent = creditCurent;
}

void Client::adaugaPlata(){
    this->plati_efectuate++;
}

std::ostream &operator<<(std::ostream &os, const Client &client) {
    os << "Clientul " << client.getMNume() << " cu varsta de " << client.getMVarsta() << " ani" <<
    " si credit curent " << client.getCreditCurent() << " a efectuat "  << client.getPlatiEfectuate() << " plati";
    return os;
}
