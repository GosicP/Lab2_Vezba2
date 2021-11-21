
#include "Biblioteka.h"

Biblioteka::Biblioteka(string name_library, int max_nmbr_books) {
    niz=new Knjiga*[max_nmbr_books];
    ime_biblioteke=name_library;
    max_broj_knjiga_biblioteka=max_nmbr_books;

}

const string &Biblioteka::getImeBiblioteke() const {
    return ime_biblioteke;
}

int Biblioteka::getBrojKnjigaBiblioteka() const {
    return broj_knjiga_biblioteka;
}

int Biblioteka::getMaxBrojKnjigaBiblioteka() const {
    return max_broj_knjiga_biblioteka;
}

Biblioteka::Biblioteka(const Biblioteka &b) {
    niz= new Knjiga*[b.max_broj_knjiga_biblioteka];
    for (int i=0; i<max_broj_knjiga_biblioteka; i++){
        niz[i]=b.niz[i];
    }
    /*duz=b.duz;
    prvi=b.prvi;
    posl=b.posl;*/
}

Biblioteka::Biblioteka(const Biblioteka &&b) {
    niz = b.niz;
    /*duz = b.duz;
    prvi = b.prvi;
    posl = b.posl;*/
    max_broj_knjiga_biblioteka = b.max_broj_knjiga_biblioteka;
}

Biblioteka::~Biblioteka() {
    delete[] niz;
}




Knjiga *Biblioteka::dohv_knjigu(int id) {
    Knjiga *k;
    for (i=0; i<broj_knjiga_biblioteka; i++){
        k=niz[i];
        if(k->getId()==id){
            return k;
        }
    }
}

Biblioteka &Biblioteka::operator+=(Knjiga k) {
    this->niz[i]= !k;
    i++;
    broj_knjiga_biblioteka=i;
    return *this;
}

