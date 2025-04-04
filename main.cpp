#include "olay.h"
#include <iostream>
using namespace std;
//BU KODU CALISTIRMAK ICIN TERMINALE SU KODU YAZINIZ: g++ -std=c++11 main.cpp olay.cpp -o main
//KEREM	YÜKSEL - 2104040034
//EMİR CAN TANYILDIZ - 2204040177
//EMRECAN KAHVECİ - 2204040160

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
