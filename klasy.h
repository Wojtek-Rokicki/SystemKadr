#ifndef KLASY_H_
#define KLASY_H_

#include <iostream>
#include <string>

using namespace std;

class inzynier{
private:
    string imieNazwisko;
    string stanowisko;
public:
    inzynier(const string & in = "brak imienia, nazwiska", string stan = "brak stanowiska" );
    const string rimieNazwisko() const {return imieNazwisko;}
    const string tytul() const {return "inz.";}
    string rstanowisko() const{return stanowisko;}
    void promuj();
    void degraduj();
    virtual void wyswietlInfo() const;
    virtual ~inzynier() {};
};

class magister : public inzynier{
public:
    magister(const string & in = "brak imienia, nazwiska", string stan = "brak stanowiska");
    magister(const inzynier & inz);
    const string tytul() const {return "mgr.";}
    virtual void wyswietlInfo() const;
};

class doktor : public magister{
public:
    doktor(const string & in = "brak imienia, nazwiska", string stan = "brak stanowiska");
    doktor(const magister & mgr);
    const string tytul() const {return "dr.";}
    virtual void wyswietlInfo() const;
};

class habdoktor : public doktor{
public:
    habdoktor(const string & in = "brak imienia, nazwiska", string stan = "brak stanowiska");
    habdoktor(const doktor & dr);
    const string tytul() const {return "hab.";}
    virtual void wyswietlInfo() const;
};

class profesor : public habdoktor{
public:
    profesor(const string & in = "brak imienia, nazwiska", string stan = "brak stanowiska");
    profesor(const habdoktor & habdr);
    const string tytul() const {return "prof.";}
    virtual void wyswietlInfo() const;
};

#endif