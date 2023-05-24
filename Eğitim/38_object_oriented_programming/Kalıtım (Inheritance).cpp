
#include <iostream>

using namespace std;

class sinifana {
  private:
    // Bu değişkene sadece sinifana içindeki fonksiyonlar erişim sağlayabilir.
    int priidana;

  protected:
    // Bu değişkene sinifana içindeki fonksiyonlar ile sinifana sınıfından türetilmiş sınıf fonksiyonları erişim sağlayabilir.
    int proidana;

  public:
    // Bu değişkene sinifana içindeki fonksiyonlar ve sinifana sınıfından türetilmiş sınıf fonksiyonları ile
    // sinifana türünden ve türetilmiş sınıf türünden oluşturulmuş nesneler doğrudan erişim sağlayabilir.
    int pubidana;
    void deger_ata(int pid1, int pid2, int pid3)
    {
      priidana = pid1; proidana = pid2; pubidana = pid3;
      cout << "sinifana değişkenlerine değer atama: " << priidana << " " << proidana << " " << pubidana << endl;
    }
    void deger_goster()
    {
      cout << "sinifana değişken değerleri: " << priidana << " " << proidana << " " << pubidana << endl;
    }
};

class siniftur : public sinifana {
  private:
    int priidtur;

  protected:
    int proidtur;

  public:
    int pubidtur;
    // Türetilen sınıf içindeki fonksiyonlar direk olarak
    // ana sınıfın public ve protected değişkenlerine erişim sağlayabilir.
    void deger_ata_tur(int pid1, int pid2)
    {
      priidtur = proidana + pubidana; proidtur = pid1; pubidtur = pid2;
      cout << "siniftur değişkenlerine değer atama: " << priidtur << " " << proidtur << " " <<  pubidtur << endl;
    }
    void deger_goster_tur() { cout << "siniftur değişken değerleri: " << priidtur << " " << proidtur << " " << pubidtur << endl; }
};

int main(void)
{
  sinifana nes_ana;

  cout << "nes_ana değişkeninin sinifana elemanlarına erişimi:" << endl;
  cout << "---------------------------------------------------" << endl;
  nes_ana.deger_ata(7, 21, 165);
  nes_ana.deger_goster();

  // nes_ana.priidana = 954;  // Derleme hatası verir (Nesne sınıf içindeki private değişkene doğrudan erişim sağlayamaz).
  // nes_ana.proidana = 954;  // Derleme hatası verir (Nesne sınıf içindeki protected değişkene doğrudan erişim sağlayamaz).
  nes_ana.pubidana = 954;     // Nesne sınıf içindeki public değişkene doğrudan erişim sağlar.

  nes_ana.deger_goster();

  siniftur nes_tur;

  cout << endl << "nes_tur değişkeninin sinifana elemanlarına doğrudan erişimi:" << endl;
  cout << "------------------------------------------------------------" << endl;
  /* siniftur sınıfından oluşturulan nesne, sinifana sınıfı fonksiyonları yoluyla
   sinifana sınıfı değişkenlerine değer atar ve ekrana yazar.*/
  
  nes_tur.deger_ata(8, 25, 246);
  nes_tur.deger_goster();

  // nes_tur.priidana = 741;  // Derleme hatası verir (Türetilen sınıf nesnesi ana sınıf içindeki private değişkene doğrudan erişim sağlayamaz).
  // nes_tur.proidana = 741;  // Derleme hatası verir (Türetilen sınıf nesnesi ana sınıf içindeki protected değişkene doğrudan erişim sağlayamaz).
  nes_tur.pubidana = 741;     // siniftur sınıfından oluşturulan nes_tur nesnesi ana sınıf içindeki public değişkene doğrudan erişim sağlar.

  nes_tur.deger_goster();

  cout << endl << "nes_tur değişkeninin sinifana ve siniftur elemanlarına erişimi:" << endl;
  cout << "---------------------------------------------------------------" << endl;
  /* siniftur sınıfından oluşturulan nesne, kendi fonksiyonları yoluyla sinifana sınıfının
   protected ve public değişkenlerine erişim sağlayarak kendi değişkenlerine değer atar ve ekrana yazar. */
   
  nes_tur.deger_ata_tur(12, 34);
  nes_tur.deger_goster_tur();

  nes_tur.pubidtur = 687;

  nes_tur.deger_goster_tur();

  return 0;
}