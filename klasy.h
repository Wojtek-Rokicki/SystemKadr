#ifndef KLASY_H_
#define KLASY_H_

#include <iostream>
#include <string>

using namespace std;

class inzynier{
private:
    string imieNazwisko;
    const string tytul1 = "inz.";
    string stanowisko;
public:
    inzynier(const string & in = "brak imienia, nazwiska", string stan = "brak stanowiska" );
    const string rimieNazwisko() const {return imieNazwisko;}
    const string rtytul1() const {return tytul1;}
    string rstanowisko() const{return stanowisko;}
    void promuj();
    void degraduj();
    virtual void wyswietlInfo() const;
    virtual ~inzynier() {};
};

class magister : public inzynier{
private:
    string tytul2 = "mgr.";
public:
    magister(const string & in = "brak imienia, nazwiska", string stan = "brak stanowiska");
    magister(const inzynier & inz);
    const string rtytul2() const {return tytul2;}
    virtual void wyswietlInfo() const;
};

class doktor : public magister{
private:
    string tytul3 = "dr.";
public:
    doktor(const string & in = "brak imienia, nazwiska", string stan = "brak stanowiska");
    doktor(const magister & mgr);
    const string rtytul3() const {return tytul3;}
    virtual void wyswietlInfo() const;
};

class habdoktor : public doktor{
private:
    string tytul4 = "hab.";
public:
    habdoktor(const string & in = "brak imienia, nazwiska", string stan = "brak stanowiska");
    habdoktor(const doktor & dr);
    const string rtytul4() const {return tytul4;}
    virtual void wyswietlInfo() const;
};

class profesor : public habdoktor{
private:
    string tytul5 = "prof.";
public:
    profesor(const string & in = "brak imienia, nazwiska", string stan = "brak stanowiska");
    profesor(const habdoktor & habdr);
    const string rtytul5() const {return tytul5;}
    virtual void wyswietlInfo() const;
};

#endif