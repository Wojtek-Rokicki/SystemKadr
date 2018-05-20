#include <iostream>
#include "klasy.h"


int main(){

    inzynier Wojtek("Wojciech Rokicki");
    inzynier Karol("Karol Konopko");
    magister Franek("Franek Hnatow");
    doktor Ania("Ania Bak");
    //doktor Krystyna(); problem z konstruktorem domyslnym
    habdoktor Lolek("Lolek Mary");
    profesor Dawid("Dawid Madry");

    Wojtek.zmienStan(1);
    Wojtek.wyswietlInfo();

    return 0;
}