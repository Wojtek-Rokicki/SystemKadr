#ifndef KLASY_H_
#define KLASY_H_

#include <iostream>
#include <string>

using namespace std;

class inzynier{
private:
    string imieNazwisko;
protected:
    int stanowisko;
    int przynaleznosc;
public:
    inzynier(const string & in = "brak imienia, nazwiska");
    const string rimieNazwisko() const {return imieNazwisko;}
    const string tytul() const {return "inz.";}
    int rstanowisko() const{return stanowisko;}
    int rprzynaleznosc() const{return przynaleznosc;}
    void zmienPrzynaleznosc(int przynal);
    virtual void zmienStan(int stan);
    virtual void wyswietlInfo() const;
    virtual ~inzynier() {cout<<"Usunieto: "<<rimieNazwisko()<<endl;};
};

class magister : public inzynier{
public:
    magister(const string & in = "brak imienia, nazwiska");
    magister(const inzynier & inz);
    const string tytul() const {return "mgr.";}
    virtual void zmienStan(int stan);
    virtual void wyswietlInfo() const;
};

class doktor : public magister{
public:
    doktor(const string & in = "brak imienia, nazwiska");
    doktor(const magister & mgr);
    const string tytul() const {return "dr.";}
    virtual void zmienStan(int stan);
    virtual void wyswietlInfo() const;
};

class habdoktor : public doktor{
public:
    habdoktor(const string & in = "brak imienia, nazwiska");
    habdoktor(const doktor & dr);
    const string tytul() const {return "hab.";}
    virtual void zmienStan(int stan);
    virtual void wyswietlInfo() const;
};

class profesor : public habdoktor{
public:
    profesor(const string & in = "brak imienia, nazwiska");
    profesor(const habdoktor & habdr);
    const string tytul() const {return "prof.";}
    virtual void zmienStan(int stan);
    virtual void wyswietlInfo() const;
};

#endif

//dziekan co najmniej dr hab
//prodziekan co najmniej dr

//dyr. co najmniej dr hab
//kierownik zakl co najmniej dr hab

//zast co najmniej mgr