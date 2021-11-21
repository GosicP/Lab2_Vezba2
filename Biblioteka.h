#include <iostream>
#include <array>
#include <iostream>
#include "Knjiga.h"
#ifndef LAB2_VEZBA2_BIBLIOTEKA_H
#define LAB2_VEZBA2_BIBLIOTEKA_H


class Biblioteka {
protected:
    string ime_biblioteke;
    int broj_knjiga_biblioteka, max_broj_knjiga_biblioteka;
    int* prvi, posl;
    int i=0;
    Knjiga** niz;
public:
    Biblioteka(string name_library, int max_nmbr_books);

    Biblioteka(const Biblioteka& b);
    Biblioteka(const Biblioteka&& b) ;
    ~Biblioteka();

    const string &getImeBiblioteke() const;

    int getBrojKnjigaBiblioteka() const;

    int getMaxBrojKnjigaBiblioteka() const;

    Biblioteka& operator += (Knjiga k);

    Knjiga* dohv_knjigu(int id);

    friend ostream& operator<<(ostream& os, const Biblioteka& b){
        os<<"BIBLIOTEKA "<<b.ime_biblioteke<<" "<<b.broj_knjiga_biblioteka<<"/"<<b.max_broj_knjiga_biblioteka<<endl;
        for (int k=0; k<b.broj_knjiga_biblioteka;k++){
            os<<b.niz[k]->getId()<<" "<<b.niz[k]->getImeAutora()<<" "<<b.niz[k]->getImeKnjige()<<endl;
        }
        return os;
    };
};


#endif
