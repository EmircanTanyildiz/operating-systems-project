#include "olay.h"

int main() {
    Olay olay;
    int zaman = 0;

    olay.setOlaySayisi();   // Rastgele olay sayısı belirlenir
    olay.setOlaySuresi();   // Her olayın süresi belirlenir (hepsi aynı)

    int olaySayisi = olay.getOlaySayisi();
    int sure = olay.getOlaySuresi();

    for (int i = 0; i < olaySayisi; ++i) {
        olay.olayUret(sure, &zaman); // Her olay zamanı güncelleyerek çıktı verir
    }

    return 0;
}
