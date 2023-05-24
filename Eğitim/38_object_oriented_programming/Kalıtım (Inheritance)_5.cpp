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
    // Bu değişkene sinifana içindeki fonksiyonlar ve sinifana türünden oluşturulmuş nesneler ile
    // siniftur içindeki fonksiyonlar doğrudan erişim sağlayabilir.
    int pubidana;
    void deger_ata(int pid1, int pid2, int pid3)
    {
      priidana = pid1; proidana = pid2; pubidana = pid3;
      cout << "sinifana değişkenlerine değer atama: " << priidana << " " << proidana << " " << pubidana << endl;
    }
    void deger_goster() { cout << "sinifana değişken değerleri: " << priidana << " " << proidana << " " << pubidana << endl; }
};

class siniftur : protected sinifana {
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

int main(void)
{
  sinifana nes_ana;

  cout << "nes_ana değişkeninin sinifana elemanlarına erişimi:" << endl;
  cout << "---------------------------------------------------" << endl;
  nes_ana.deger_ata(7, 21, 165);
  nes_ana.deger_goster();

   //nes_ana.priidana = 954; // Derleme hatası verir (Nesne sınıf içindeki private değişkene doğrudan erişim sağlayamaz).
   //nes_ana.proidana = 954; // Derleme hatası verir (Nesne sınıf içindeki protected değişkene doğrudan erişim sağlayamaz). */

  nes_ana.pubidana = 954;    // Nesne sınıf içindeki public değişkene doğrudan erişim sağlar.

  nes_ana.deger_goster();

  siniftur nes_tur;

  cout << endl << "nes_tur değişkeninin sinifana elemanlarına doğrudan erişimi:" << endl;
  cout << "------------------------------------------------------------" << endl;
  //siniftur sınıfından oluşturulan nesne, sinifana sınıfı fonksiyonları yoluyla
  //sinifana sınıfı değişkenlerine değer atayamaz ve ekrana yazamaz.
  //nes_tur.deger_ata(8, 25, 246); // public kalıtımda normal çalışır, private ve protected kalıtımda derleme hatası verir.
  //nes_tur.deger_goster();        // public kalıtımda normal çalışır, private ve protected kalıtımda derleme hatası verir.

  //Türetilen sınıf nesnesi ana sınıf içindeki private ve protected değişkenlere doğrudan erişim sağlayamaz.
  //nes_tur.priidana = 741;  // public ve private kalıtımda derleme hatası verir.
  //nes_tur.proidana = 741;  // public ve private kalıtımda derleme hatası verir.
  //nes_tur.pubidana = 741;  // public kalıtımda normal çalışır, private ve protected kalıtımda derleme hatası verir.

  //nes_tur.deger_goster(); // public kalıtımda normal çalışır, private kalıtımda derleme hatası verir. 

  cout << endl << "nes_tur değişkeninin sınıfana ve siniftur elemanlarına erişimi:" << endl;
  cout << "---------------------------------------------------------------" << endl;
  /* siniftur sınıfından oluşturulan nesne, kendi fonksiyonları yoluyla
   sinifana ve siniftur içindeki protected ve public değişkenlere değer atar ve ekrana yazar. */

  nes_tur.deger_ata_tur(9, 16, 4, 17, 28); // İlk iki parametre anasinif değişken değerleri için değer atar.
  nes_tur.deger_goster_tur();

  nes_tur.pubidtur = 687;

  nes_tur.deger_goster_tur();

  return 0;
}