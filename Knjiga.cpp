

#include "Knjiga.h"
int Knjiga::ID=0;
Knjiga::Knjiga(string knjiga_ime, string autor) {
    ime_knjige=knjiga_ime;
    ime_autora=autor;
}

const string &Knjiga::getImeKnjige() const {
    return ime_knjige;
}

void Knjiga::setImeKnjige(const string &imeKnjige) {
    ime_knjige = imeKnjige;
}

const string &Knjiga::getImeAutora() const {
    return ime_autora;
}

void Knjiga::setImeAutora(const string &imeAutora) {
    ime_autora = imeAutora;
}

int Knjiga::getId() const {
    return id;
}

void Knjiga::setId(int id) {
    Knjiga::id = id;
}

ostream &operator<<(ostream &os, const Knjiga &k) {
    return os<<"KNJIGA "<<k.id<<":"<<k.ime_knjige<<"-"<<k.ime_autora<<endl;
}

Knjiga *Knjiga::operator!() const {
    Knjiga* k=new Knjiga(ime_autora, ime_knjige);
    k->ime_autora=ime_autora;
    k->ime_knjige=ime_knjige;
    return k;
}


