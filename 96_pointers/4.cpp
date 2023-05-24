#include <iostream>  // Girdi/Çıktı işlemleri için kütüphane dahil edildi.

using namespace std; // std isim alanı kullanılacak.

int main(void)       // Programın ana fonksiyonu olan main tanımlandı.
{
  char *cp, cd;     // cp adında bir işaretçi (pointer) ve cd adında bir karakter değişkeni tanımlandı.

  cp = &cd;         // cd değişkeninin bellek adresi cp işaretçisine atandı.

  for (cd='A'; cd<'L'; cd++) // cd değişkenine A'dan başlayarak L'ye kadar bir dizi karakter atanarak for döngüsü başlatıldı.
    cout << *cp << " ";      // cp işaretçisinden okunan karakterler (*cp) cout ile ekrana yazdırıldı.

  std::cout << "\n"; // Yeni satır karakteri eklenerek bir satır boşluk bırakıldı.

  return 0;          // Programın başarıyla sonlandığını belirtmek için 0 döndürüldü.
}
