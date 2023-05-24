#include <iostream>

using namespace std;

class sinifana 
{
  private:
    // Bu değişkene sadece sinifana içindeki fonksiyonlar erişim sağlayabilir.
    int priidana;

  protected:
    // Bu değişkene sinifana içindeki fonksiyonlar ile sinifana sınıfından türetilmiş sınıf fonksiyonları erişim sağlayabilir.
    int proidana;

  public:
    /* Bu değişkene sinifana içindeki fonksiyonlar ve sinifana sınıfından türetilmiş sınıf fonksiyonları ile
     sinifana türünden ve türetilmiş sınıf türünden oluşturulmuş nesneler doğrudan erişim sağlayabilir. */

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

class siniftur : public sinifana 
{
  private:
    int priidtur;

  protected:
    int proidtur;

  public:
    int pubidtur;
    /* Türetilen sınıf içindeki fonksiyonlar direk olarak
     ana sınıfın public ve protected değişkenlerine erişim sağlayabilir. */
     
    void deger_ata_tur(int pid1, int pid2)
    {
      priidtur = proidana + pubidana; proidtur = pid1; pubidtur = pid2;
      cout << "siniftur değişkenlerine değer atama: " << priidtur << " " << proidtur << " " <<  pubidtur << endl;
    }
    void deger_goster_tur() { cout << "siniftur değişken değerleri: " << priidtur << " " << proidtur << " " << pubidtur << endl; }
};

class sinifturtur : public siniftur {
  private:
    int priidturtur;

  protected:
    int proidturtur;

  public:
    int pubidturtur;
    /* Türetilen sınıftan türetilen sınıf içindeki fonksiyonlar direk olarak
     ana sınıfın public ve protected değişkenlerine erişim sağlayabilir. */

    void deger_ata_turtur(void)
    {
      priidturtur = proidana + pubidana; proidturtur = proidtur*2; pubidturtur = pubidtur*2;
      cout << "sinifturtur değişkenlerine değer atama: " << priidturtur << " " << proidturtur << " " << pubidturtur << endl;
    }
    void deger_goster_turtur() { cout << "sinifturtur değişken değerleri: " << priidturtur << " " << proidturtur << " " << pubidturtur << endl; }
};

int main(void)
{
  sinifturtur nes_turtur;

  /* sinifturtur sınıfından oluşturulan nesne, sinifana sınıfı fonksiyonları yoluyla
   sinifana sınıfı değişkenlerine değer atar ve ekrana yazar. */

  cout << "nes_turtur değişkeninin sinifana elemanlarına erişimi:" << endl;
  cout << "------------------------------------------------------" << endl;
  nes_turtur.deger_ata(78, 121, 375);
  nes_turtur.deger_goster();

  nes_turtur.pubidana = 1765; // İkinci türetilen sınıf nesnesi ana sınıf içindeki public değişkene doğrudan erişim sağlar.

  nes_turtur.deger_goster();  // sinifana fonksiyonuna erişim

  /* sinifturtur sınıfından oluşturulan nesne, siniftur sınıfı fonksiyonları yoluyla
   sinifana ve sinifturtur sınıflarının protected ve public değişkenlerine erişim
   sağlayarak siniftur sınıfı değişkenlerine değer atar ve ekrana yazar. */

  cout << endl << "nes_turtur değişkeninin siniftur elemanlarına erişimi:" << endl;
  cout << "------------------------------------------------------" << endl;
  nes_turtur.deger_ata_tur(82, 217);
  nes_turtur.deger_goster_tur();

  nes_turtur.pubidtur = 4257;    // İkinci türetilen sınıf nesnesi ilk türetilen sınıf içindeki public değişkene doğrudan erişim sağlar.

  nes_turtur.deger_goster_tur(); // İkinci türetilen sınıf fonksiyonuna erişim

  /* sinifturtur sınıfından oluşturulan nesne, kendi fonksiyonları yoluyla sinifana ve sinifturtur sınıflarının
   protected ve public değişkenlerine erişim sağlayarak kendi değişkenlerine değer atar ve ekrana yazar. */

  cout << endl << "nes_turtur değişkeninin sinifturtur elemanlarına erişimi:" << endl;
  cout << "---------------------------------------------------------" << endl;
  nes_turtur.deger_ata_turtur();
  nes_turtur.deger_goster_turtur();

  nes_turtur.pubidturtur = 6321; // İkinci türetilen sınıf nesnesi kendi içindeki public değişkene doğrudan erişim sağlar.

  nes_turtur.deger_goster_turtur();

  return 0;
}