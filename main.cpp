#include <iostream>
#include "klasy.h"

int main(){

    inzynier Wojtek("Wojciech Rokicki", "asystent");
    inzynier Karol("Karol Konopko");

    magister Franek("Franek Hnatow");

    Wojtek.wyswietlInfo();
    cout<<endl;
    Karol.wyswietlInfo();
    cout<<endl;
    Franek.wyswietlInfo();
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

    return 0;
}