#include <iostream>
#include "klasy.h"

using namespace std;

inzynier::inzynier(const string & in, string stan) : imieNazwisko(in), stanowisko(stan){}

magister::magister(const string & in, string stan) : inzynier(in, stan){}
magister::magister(const inzynier & inz) : inzynier(inz){}

doktor::doktor(const string & in, string stan) : magister(in, stan){}
doktor::doktor(const magister & mgr) : magister(mgr){}

habdoktor::habdoktor(const string & in, string stan) : doktor(in, stan){}
habdoktor::habdoktor(const doktor & dr) : doktor(dr){}

profesor::profesor(const string & in, string stan) : habdoktor(in, stan){}
profesor::profesor(const habdoktor & habdr) : habdoktor(habdr){}

void inzynier::wyswietlInfo() const{
    cout<<tytul()<<" "<<rimieNazwisko()<<endl;
    cout<<"Stanowisko: "<<rstanowisko()<<endl;
}

void magister::wyswietlInfo() const{
    cout<<tytul()<<" ";
    inzynier::wyswietlInfo();
}

void doktor::wyswietlInfo() const{
    cout<<tytul()<<" ";
    magister::wyswietlInfo();
}

void habdoktor::wyswietlInfo() const{
    cout<<tytul()<<" ";
    doktor::wyswietlInfo();
}

void profesor::wyswietlInfo() const{
    cout<<tytul()<<" ";
    habdoktor::wyswietlInfo();
}

void inzynier::promuj(){
    if(rstanowisko()=="asystent") cout<<"Inzynier/magister moze byc co najwyzej asystentem."<<endl;
    if(rstanowisko()=="brak stanowiska") stanowisko = "asystent";
}

void inzynier::degraduj(){
    if(rstanowisko()=="brak stanowiska") cout<<"Ta osoba nie jest na zadnym stanowisku."<<endl;;
    if(rstanowisko()=="asystent") stanowisko = "brak stanowiska";
}