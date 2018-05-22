#include <iostream>
#include "klasy.h"

using namespace std;

inzynier::inzynier(const string & in) : imieNazwisko(in), stanowisko(0), przynaleznosc(0){cout<<"Przyjeto nowa osobe na Wydzial: "<<endl<<endl; wyswietlInfo();}

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
    switch(rprzynaleznosc())
    {
        case 0:
        cout<<"Przynaleznosc: brak przynaleznosci"<<endl;
        break;
        case 1:
        cout<<"Przynaleznosc: Instytut"<<endl;
        break;
        case 2:
        cout<<"Przynaleznosc: Zaklad"<<endl;
        break;
    }
    cout<<endl;
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
            cout<<"Pozbawiono stanowiska"<<endl;
            stanowisko=0;
        break;
        case 1:
            cout<<"Promowano na Asystenta"<<endl;
            stanowisko=1;
        break;
        default:
            cout<<"Nieprawidlowe stanowisko"<<endl;
        break;
    }
    cout<<endl;
}

void magister::zmienStan(int stan){
    switch(stan)
    {
        case 0:
            cout<<"Pozbawiono stanowiska"<<endl;
            stanowisko=0;
        break;
        case 1:
            cout<<"Promowano na Asystenta"<<endl;
            stanowisko=1;
        break;
        case 6:
            cout<<"Promowano na Zast. Dyrektora Instytutu"<<endl;
            stanowisko=6;
        break;
        default:
            cout<<"Nieprawidlowe stanowisko"<<endl;
        break;
    }
    cout<<endl;
}

void doktor::zmienStan(int stan){
    switch(stan)
    {
        case 0:
            cout<<"Pozbawiono stanowiska"<<endl;
            stanowisko=0;
        break;
        case 1:
            cout<<"Promowano na Asystenta"<<endl;
            stanowisko=1;
        break;
        case 2:
            cout<<"Promowano na Adiunkta"<<endl;
            stanowisko=2;
        break;
        case 6:
            cout<<"Promowano na Zast. Dyrektora Instytutu"<<endl;
            stanowisko=6;
            przynaleznosc=1;
        break;
        case 8:
            cout<<"Promowano na Prodziekana"<<endl;
            stanowisko=8;
        break;
        default:
            cout<<"Nieprawidlowe stanowisko"<<endl;
        break;
    }
    cout<<endl;
}

void habdoktor::zmienStan(int stan){
    switch(stan)
    {
        case 0:
            cout<<"Pozbawiono stanowiska"<<endl;
            stanowisko=0;
        break;
        case 2:
            cout<<"Promowano na Adiunkta"<<endl;
            stanowisko=2;
        break;
        case 3:
            cout<<"Promowano na Prof. nadzwycz."<<endl;
            stanowisko=3;
        break;
        case 5:
            cout<<"Promowano na Kier. Zakladu"<<endl;
            stanowisko=5;
            przynaleznosc=2;
        break;
        case 6:
            cout<<"Promowano na Zast. Dyrektora Instytutu"<<endl;
            stanowisko=6;
            przynaleznosc=1;
        break;
        case 7:
            cout<<"Promowano na Dyrektora Instytutu"<<endl;
            stanowisko=7;
            przynaleznosc=1;
        break;
        case 8:
            cout<<"Promowano na Prodziekana"<<endl;
            stanowisko=8;
        break;
        case 9:
            cout<<"Promowano na Dziekana"<<endl;
            stanowisko=9;
        break;
        default:
            cout<<"Nieprawidlowe stanowisko"<<endl;
        break;
    }
    cout<<endl;
}

void profesor::zmienStan(int stan){
    switch(stan)
    {
        case 0:
            cout<<"Pozbawiono stanowiska"<<endl;
            stanowisko=0;
        break;
        case 3:
            cout<<"Promowano na Prof. nadzwycz."<<endl;
            stanowisko=3;
        break;
        case 4:
            cout<<"Promowano na Prof. zwycz."<<endl;
            stanowisko=4;
        break;
        case 5:
            cout<<"Promowano na Kier. Zakladu"<<endl;
            stanowisko=5;
            przynaleznosc=2;
        break;
        case 6:
            cout<<"Promowano na Zast. Dyrektora Instytutu"<<endl;
            stanowisko=6;
            przynaleznosc=1;
        break;
        case 7:
            cout<<"Promowano na Dyrektora Instytutu"<<endl;
            stanowisko=7;
            przynaleznosc=1;
        break;
        case 8:
            cout<<"Promowano na Prodziekana"<<endl;
            stanowisko=8;
        break;
        case 9:
            cout<<"Promowano na Dziekana"<<endl;
            stanowisko=9;
        break;
        default:
            cout<<"Nieprawidlowe stanowisko"<<endl;
        break;
    }
    cout<<endl;
}

void inzynier::zmienPrzynaleznosc(int przynal){
    switch(przynal)
    {
        case 0:
            cout<<"Pozbawiono przynaleznosci"<<endl;
            przynaleznosc=0;
        break;
        case 1:
            cout<<"Nadano przynaleznosc do Instytutu"<<endl;
            przynaleznosc=1;
        break;
        case 2:
            cout<<"Nadano przynaleznosc do Zakladu"<<endl;
            przynaleznosc=2;
        break;
        default:
            cout<<"Nieprawidlowa przynaleznosc"<<endl;
        break;
    }
    cout<<endl;
}