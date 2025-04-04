#ifndef OLAY_H
#define OLAY_H

#include <iostream>
using namespace std;
class Olay{
    public:
    // Rastgele olay sayısı üretir (örnek: 1-10 arası) değişkene set eder
    void setOlaySayisi();

    // Bir olayın kaç saniye süreceğini rastgele üretir (örnek: 1-10 arası) değişkene set eder
    void setOlaySuresi();

    //olay sayisini dondurur
    int getOlaySayisi() const;

    //olaySuresini Dondurur
    int getOlaySuresi() const;

    // Görev: zaman değerini pointer ile kullanarak
    // "zaman: 009 s: olay oldu." çıktısını basar,
    //*zamanPtr += sure ifadesi ile maindeki zamani arttırır
    void olayUret(int sure, int* zamanPtr);
    
    private:
    int _olaySayisi; 
    int _olaySuresi;
};



#endif // OLAY_H
