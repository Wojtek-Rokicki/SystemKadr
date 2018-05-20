#include <iostream>
#include "klasy.h"

using namespace std;

inzynier::inzynier(const string & in) : imieNazwisko(in), stanowisko(0){}

magister::magister(const string & in) : inzynier(in){}
magister::magister(const inzynier & inz) : inzynier(inz){}

doktor::doktor(const string & in) : magister(in){}
doktor::doktor(const magister & mgr) : magister(mgr){}

habdoktor::habdoktor(const string & in) : doktor(in){}
habdoktor::habdoktor(const doktor & dr) : doktor(dr){}

profesor::profesor(const string & in) : habdoktor(in){}
profesor::profesor(const habdoktor & habdr) : habdoktor(habdr){}

void inzynier::wyswietlInfo() const{
    cout<<tytul()<<" "<<rimieNazwisko()<<endl;
    switch(rstanowisko())
    {
        case 0:
        cout<<"Stanowisko: brak stanowiska"<<endl;
        break;
        case 1:
        cout<<"Stanowisko: asystent"<<endl;
        break;
        case 2:
        cout<<"Stanowisko: adiunkt"<<endl;
        break;
        case 3:
        cout<<"Stanowisko: prof. nadzwycz."<<endl;
        break;
        case 4:
        cout<<"Stanowisko: prof. zwycz."<<endl;
        break;
        case 5:
        cout<<"Stanowisko: kierownik zakladu"<<endl;
        break;
        case 6:
        cout<<"Stanowisko: zast. dyrektora instytutu"<<endl;
        break;
        case 7:
        cout<<"Stanowisko: dyrektor instytutu"<<endl;
        break;
        case 8:
        cout<<"Stanowisko: prodziekan"<<endl;
        break;
        case 9:
        cout<<"Stanowisko: dziekan"<<endl;
        break;
        default:
        cout<<"Stanowisko: brak stanowiska"<<endl;
        break;
    }
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

void inzynier::zmienStan(int stan){
    switch(stan)
    {
        case 0:
            stanowisko=0;
        break;
        case 1:
            stanowisko=1;
        break;
        default:
            cout<<"Nieprawidlowe stanowisko - ustawiam na brak stanowiska"<<endl;
            stanowisko=0;
        break;
    }
}

void magister::zmienStan(int stan){
    switch(stan)
    {
        case 0:
            stanowisko=0;
        break;
        case 1:
            stanowisko=1;
        break;
        case 6:
            stanowisko=6;
        break;
        default:
            cout<<"Nieprawidlowe stanowisko - ustawiam na brak stanowiska"<<endl;
            stanowisko=0;
        break;
    }
}

void doktor::zmienStan(int stan){
    switch(stan)
    {
        case 0:
            stanowisko=0;
        break;
        case 1:
            stanowisko=1;
        break;
        case 2:
            stanowisko=1;
        break;
        case 6:
            stanowisko=6;
        break;
        case 8:
            stanowisko=8;
        break;
        default:
            cout<<"Nieprawidlowe stanowisko - ustawiam na brak stanowiska"<<endl;
            stanowisko=0;
        break;
    }
}

void habdoktor::zmienStan(int stan){
    switch(stan)
    {
        case 0:
            stanowisko=0;
        break;
        case 2:
            stanowisko=2;
        break;
        case 3:
            stanowisko=3;
        break;
        case 5:
            stanowisko=5;
        break;
        case 6:
            stanowisko=6;
        break;
        case 7:
            stanowisko=7;
        break;
        case 8:
            stanowisko=8;
        break;
        case 9:
            stanowisko=9;
        break;
        default:
            cout<<"Nieprawidlowe stanowisko - ustawiam na brak stanowiska"<<endl;
            stanowisko=0;
        break;
    }
}

void profesor::zmienStan(int stan){
    switch(stan)
    {
        case 0:
            stanowisko=0;
        break;
        case 3:
            stanowisko=3;
        break;
        case 4:
            stanowisko=4;
        break;
        case 5:
            stanowisko=5;
        break;
        case 6:
            stanowisko=6;
        break;
        case 7:
            stanowisko=7;
        break;
        case 8:
            stanowisko=8;
        break;
        case 9:
            stanowisko=9;
        break;
        default:
            cout<<"Nieprawidlowe stanowisko - ustawiam na brak stanowiska"<<endl;
            stanowisko=0;
        break;
    }
}