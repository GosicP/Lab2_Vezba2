#include <iostream>
#include "Knjiga.h"
#include "Biblioteka.h"
using namespace std;
int main() {
    Knjiga k2("Intelligent investor", "Benjamin Graham");
    Knjiga k1("Na drini cuprija", "Ivo Andric");
    Knjiga k3("ne znam ", "nmp iskreno");
    Biblioteka b("Narodna biblioteka", 500);
    Knjiga* kn= !k1;
    cout<<*kn;
    /*cout<<*kn;*/
    b+=k1;
    b+=k2;
    b+=k3;
    Knjiga* k3n=b.dohv_knjigu(5); //idijevi krecu od 4, ili 5, u zavisnosti koliko ima knjiga pre toga iz nekog razloga
    cout<<b;
    cout<<*k3n;
}
