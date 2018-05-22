#include <iostream>
#include "klasy.h"

bool test1();
bool test2();

int main(){

    if(test1())cout<<"Test1 powiodl sie."<<endl;
    else cout<<"Test1 nie udal sie."<<endl;

    if(test2())cout<<"Test2 powiodl sie."<<endl;
    else cout<<"Test2 nie udal sie."<<endl;

    return 0;
}

bool test1(){
    bool wynik=false;

    inzynier Wojtek("Wojciech Rokicki");
    inzynier Karol("Karol Konopko");
    magister Franek("Franek Hnatow");
    doktor Ania("Ania Bak");
    habdoktor Lolek("Lolek Mary");
    profesor Dawid("Dawid Madry");

    Wojtek.zmienStan(1);
    Wojtek.wyswietlInfo();

    Wojtek.zmienStan(4);
    Wojtek.wyswietlInfo();

    Wojtek.zmienStan(0);
    Wojtek.wyswietlInfo();

    Lolek.zmienPrzynaleznosc(2);
    Lolek.wyswietlInfo();

    Lolek.zmienStan(7);
    Lolek.wyswietlInfo();

    if(Lolek.rstanowisko()==7&&Lolek.rprzynaleznosc()==1)wynik=true;

    return wynik;
}

bool test2(){
    bool wynik=false;

    inzynier Wojtek("Wojciech Rokicki");
    inzynier Karol("Karol Konopko");
    magister Franek("Franek Hnatow");
    doktor Ania("Ania Bak");
    habdoktor Lolek("Lolek Mary");
    profesor Dawid("Dawid Madry");

    Dawid.zmienPrzynaleznosc(1);
    Dawid.wyswietlInfo();

    Dawid.zmienStan(2);
    Dawid.wyswietlInfo();

    if(Dawid.rstanowisko()==0&&Dawid.rprzynaleznosc()==1)wynik=true;

    return wynik;
}