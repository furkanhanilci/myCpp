#include <iostream>

using namespace std;

class sinifana {
  private:
    // Bu değişkene sadece sinifana içindeki fonksiyonlar erişim sağlayabilir.
    int priidana;

  protected:
    // Bu değişkene sinifana ve siniftur içindeki fonksiyonlar erişim sağlayabilir.
    int proidana;

  public:
    /* Bu değişkene sinifana içindeki fonksiyonlar ve sinifana türünden oluşturulmuş nesneler ile
    siniftur içindeki fonksiyonlar doğrudan erişim sağlayabilir. */

    int pubidana;
    void deger_ata(int pid1, int pid2, int pid3)
    {
      priidana = pid1; proidana = pid2; pubidana = pid3;
      cout << "sinifana değişkenlerine değer atama: " << priidana << " " << proidana << " " << pubidana << endl;
    }
    void deger_goster() { cout << "sinifana değişken değerleri: " << priidana << " " << proidana << " " << pubidana << endl; }
};

class siniftur : private sinifana {
  private:
    int priidtur;

  protected:
    int proidtur;

  public:
    int pubidtur;
    /* Türetilen sınıf içindeki fonksiyonlar direk olarak
     sadece türetilen sınıf değişkenlerine erişim sağlayabilir. */

    void deger_ata_tur(int pid1, int pid2, int pid3, int pid4, int pid5)
    {
      proidana = pid1; pubidana = pid2;                  // Ana sınıf değişkenlerine değer atama
      priidtur = pid3; proidtur = pid4; pubidtur = pid5; // Türetilen sınıf değişkenlerine değer atama
      cout << "sinifana değişkenlerine değer atama: " << proidana << " " << pubidana << endl;
      cout << "siniftur değişkenlerine değer atama: " << priidtur << " " << proidtur << " " <<  pubidtur << endl;
    }
    void deger_goster_tur()
    {
      cout << "sinifana değişken değerleri: " << proidana << " " << pubidana << " " << endl;
      cout << "siniftur değişken değerleri: " <<  priidtur << " " << proidtur << " " << pubidtur << endl;
    }
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
      priidturtur = proidtur; proidturtur = proidtur*2; pubidturtur = pubidtur*2;
      cout << "sinifturtur değişkenlerine değer atama: " << priidturtur << " " << proidturtur << " " << pubidturtur << endl;
    }
    void deger_goster_turtur() { cout << "sinifturtur değişken değerleri: " << priidturtur << " " << proidturtur << " " << pubidturtur << endl; }
};

int main(void)
{
  siniftur nes_tur;

  cout << "nes_tur değişkeninin sinifana elemanlarına doğrudan erişimi:" << endl;
  cout << "------------------------------------------------------------" << endl;
  /*siniftur sınıfından oluşturulan nesne, sinifana sınıfı fonksiyonları yoluyla
   sinifana sınıfı değişkenlerine değer atayamaz ve ekrana yazamaz. */

  // nes_tur.deger_ata(8, 25, 246); // public kalıtımda normal çalışır, private kalıtımda derleme hatası verir.
  // nes_tur.deger_goster();        // public kalıtımda normal çalışır, private kalıtımda derleme hatası verir.

  // Türetilen sınıf nesnesi ana sınıf içindeki private ve protected değişkenlere doğrudan erişim sağlayamaz.

  // nes_tur.priidana = 741;  // public ve private kalıtımda derleme hatası verir.
  // nes_tur.proidana = 741;  // public ve private kalıtımda derleme hatası verir.
  // nes_tur.pubidana = 741;  // public kalıtımda normal çalışır, private kalıtımda derleme hatası verir.

  // nes_tur.deger_goster(); // public kalıtımda normal çalışır, private kalıtımda derleme hatası verir.

  cout << endl << "nes_tur değişkeninin sınıfana ve siniftur elemanlarına erişimi:" << endl;
  cout << "---------------------------------------------------------------" << endl;
  /* siniftur sınıfından oluşturulan nesne, kendi fonksiyonları yoluyla
   sinifana ve siniftur içindeki protected ve public değişkenlere değer atar ve ekrana yazar.*/

  nes_tur.deger_ata_tur(9, 16, 4, 17, 28); // İlk iki parametre anasinif değişken değerleri için değer atar.
  nes_tur.deger_goster_tur();

  nes_tur.pubidtur = 687;

  nes_tur.deger_goster_tur();

  sinifturtur nes_turtur;

  /* sinifturtur sınıfından oluşturulan nesne, sinifana sınıfı fonksiyonları yoluyla
   sinifana sınıfı değişkenlerine atayamaz ve ekrana yazamaz.*/

  cout << endl << "nes_turtur değişkeninin sinifana elemanlarına erişimi:" << endl;
  cout << "------------------------------------------------------" << endl;
  // nes_turtur.deger_ata(78, 121, 375); // Derleme hatası verir.
  // nes_turtur.deger_goster();          // Derleme hatası verir.

  // nes_turtur.pubidana = 1765;         // Derleme hatası verir.

  // nes_turtur.deger_goster();          // Derleme hatası verir.

  /* sinifturtur sınıfından oluşturulan nesne, siniftur sınıfı fonksiyonları yoluyla
   sinifana ve sinifturtur sınıflarının protected ve public değişkenlerine erişim
   sağlayarak siniftur sınıfı değişkenlerine değer atar ve ekrana yazar. */

  cout << endl << "nes_turtur değişkeninin siniftur elemanlarına erişimi:" << endl;
  cout << "------------------------------------------------------" << endl;
  nes_turtur.deger_ata_tur(7, 19, 5, 21, 37);
  nes_turtur.deger_goster_tur();

  nes_turtur.pubidtur = 3754;    // İkinci türetilen sınıf nesnesi ilk türetilen sınıf içindeki public değişkene doğrudan erişim sağlar.

  nes_turtur.deger_goster_tur(); // İkinci türetilen sınıf fonksiyonuna erişim

  /* sinifturtur sınıfından oluşturulan nesne, kendi fonksiyonları yoluyla sinifturtur sınıfının
   protected ve public değişkenlerine erişim sağlayarak kendi değişkenlerine değer atar ve ekrana yazar. */
   
  cout << endl << "nes_turtur değişkeninin sinifturtur elemanlarına erişimi:" << endl;
  cout << "---------------------------------------------------------" << endl;
  nes_turtur.deger_ata_turtur();
  nes_turtur.deger_goster_turtur();

  nes_turtur.pubidturtur = 9284; // İkinci türetilen sınıf nesnesi kendi içindeki public değişkene doğrudan erişim sağlar.

  nes_turtur.deger_goster_turtur();

  return 0;
}