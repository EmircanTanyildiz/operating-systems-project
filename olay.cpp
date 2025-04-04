// olay.cpp
#include "olay.h"
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()

void Olay::setOlaySayisi() {
    srand(time(0));
    _olaySayisi = rand() % 10 + 1; // 1-10 arasında rastgele sayı
}

void Olay::setOlaySuresi() {
    _olaySuresi = rand() % 10 + 1; // 1-10 arasında rastgele süre
}

int Olay::getOlaySayisi() const {
    return _olaySayisi;
}

int Olay::getOlaySuresi() const {
    return _olaySuresi;
}

void Olay::olayUret(int sure, int* zamanPtr) {
    cout << "zaman: " << (*zamanPtr < 10 ? "00" : (*zamanPtr < 100 ? "0" : "")) << *zamanPtr << " s: olay oldu." << endl;
    *zamanPtr += sure;

}
