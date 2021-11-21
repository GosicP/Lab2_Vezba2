#include <iostream>
#ifndef LAB2_VEZBA2_KNJIGA_H
#define LAB2_VEZBA2_KNJIGA_H
using namespace std;

class Knjiga {
protected:
    string ime_knjige, ime_autora;
    static int ID;
    int id=++ID;
public:
    Knjiga(string knjiga_ime, string autor);

    const string &getImeKnjige() const;

    void setImeKnjige(const string &imeKnjige);

    const string &getImeAutora() const;

    void setImeAutora(const string &imeAutora);

    int getId() const;

    void setId(int id);

    Knjiga* operator ! () const;

    friend ostream &operator<<(ostream& os, const Knjiga& k);

};


#endif
