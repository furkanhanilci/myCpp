#include <iostream>

using namespace std;

class sinif {
  private:
    // Bu değişkene sadece sinif içindeki fonksiyonlar erişim sağlayabilir.
    int priid;

  protected:
    // Bu değişkene sinif içindeki fonksiyonlar ile sinifana sınıfından türetilmiş sınıf fonksiyonları erişim sağlayabilir.
    int proid;

  public:
    /* Bu değişkene sinif içindeki fonksiyonlar ve sinif sınıfından türetilmiş sınıf fonksiyonları ile
     sinifana türünden ve türetilmiş sınıf türünden oluşturulmuş nesneler doğrudan erişim sağlayabilir. */
     
    int pubid;
    void deger_ata(int pid1, int pid2, int pid3)
    {
      priid = pid1; proid = pid2; pubid = pid3;
      cout << "sinif değişkenlerine değer atama: " << priid << " " << proid << " " << pubid << endl;
    }
    void deger_goster()
    {
      cout << "sinif değişken değerleri: " << priid << " " << proid << " " << pubid << endl;
    }
};

int main(void)
{
  sinif nes;

  cout << "nes değişkeninin sinif elemanlarına erişimi:" << endl;
  cout << "--------------------------------------------" << endl;
  nes.deger_ata(7, 21, 135);
  nes.deger_goster();

  // nes.priid = 954; // Derleme hatası verir (Nesne sınıf içindeki private değişkene doğrudan erişim sağlayamaz).
  // nes.proid = 954; // Derleme hatası verir (Nesne sınıf içindeki protected değişkene doğrudan erişim sağlayamaz).
  nes.pubid = 954;    // Nesne sınıf içindeki public değişkene doğrudan erişim sağlar.

  nes.deger_goster();

  return 0;
}