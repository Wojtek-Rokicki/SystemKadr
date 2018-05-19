#include <iostream>
#include "klasy.h"

using namespace std;

inzynier::inzynier(const string & in, string stan) : imieNazwisko(in), stanowisko(stan){}

magister::magister(const string & in, string stan) : inzynier(in, stan){}

magister::magister(const inzynier & inz) : inzynier(inz){}

void inzynier::wyswietlInfo() const{
    cout<<rtytul1()<<" "<<rimieNazwisko()<<endl;
    cout<<"Stanowisko: "<<rstanowisko()<<endl;
}

void magister::wyswietlInfo() const{
    cout<<rtytul2()<<" ";
    inzynier::wyswietlInfo();
}

void inzynier::promuj(){
    if(rstanowisko()=="asystent") cout<<"Inzynier/magister moze byc co najwyzej asystentem."<<endl;
    if(rstanowisko()=="brak stanowiska") stanowisko = "asystent";
}

void inzynier::degraduj(){
    if(rstanowisko()=="brak stanowiska") cout<<"Ta osoba nie jest na zadnym stanowisku."<<endl;;
    if(rstanowisko()=="asystent") stanowisko = "brak stanowiska";
}