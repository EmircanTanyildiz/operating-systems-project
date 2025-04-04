#include "olay.h"
#include <iostream>
using namespace std;
int main() {
    Olay olay;
    int zaman = 0;

    olay.setOlaySayisi();   // Rastgele olay sayısı belirlenir
      

    int olaySayisi = olay.getOlaySayisi();
    

    for (int i = 0; i < olaySayisi; i++) {
        olay.setOlaySuresi(); 
        int sure = olay.getOlaySuresi();
        olay.olayUret(sure, &zaman); // Her olay zamanı güncelleyerek çıktı verir
    }

    return 0;
}
