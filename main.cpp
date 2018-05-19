#include <iostream>
#include "klasy.h"

int main(){

    inzynier Wojtek("Wojciech Rokicki", "asystent");
    inzynier Karol("Karol Konopko");
    magister Franek("Franek Hnatow");
    doktor Ania("Ania Bak");
    //doktor Krystyna(); problem z konstruktorem domyslnym
    habdoktor Lolek("Lolek Mary");
    profesor Dawid("Dawid Madry");

    Wojtek.wyswietlInfo();
    cout<<endl;
    Karol.wyswietlInfo();
    cout<<endl;
    Franek.wyswietlInfo();
    cout<<endl;
    Ania.wyswietlInfo();
    cout<<endl;
    //Krystyna.wyswietlInfo();
    //cout<<endl;
    Lolek.wyswietlInfo();
    cout<<endl;
    Dawid.wyswietlInfo();
    cout<<endl;
    Franek.promuj();
    cout<<endl;
    Franek.wyswietlInfo();
    cout<<endl;
    Franek.degraduj();
    cout<<endl;
    Franek.wyswietlInfo();
    cout<<endl;
    Wojtek.promuj();
    cout<<endl;
    
    Dawid.wyswietlInfo();
    cout<<endl;

    return 0;
}