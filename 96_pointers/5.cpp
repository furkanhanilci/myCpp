#include <iostream>  // Girdi/Çıktı işlemleri için kütüphane dahil edildi.

using namespace std; // std isim alanı kullanılacak.

int main(void)       // Programın ana fonksiyonu olan main tanımlandı.
{
  char cdizi[] = { 'A', 'B', 'C', 'D', 'E', 'F' }; // 6 elemanlı bir karakter dizisi tanımlandı.
  char *cp;         // Bir işaretçi (pointer) tanımlandı.
  int len, id;      // len ve id adında iki tamsayı değişkeni tanımlandı.

  cp = cdizi;       // cp işaretçisi, cdizi dizisinin başlangıç adresine eşitlendi. Bu, cp = &cdizi[0]; ile aynıdır.

  len = sizeof(cdizi) / sizeof(char); // cdizi dizisinin eleman sayısı, sizeof operatörü ile bulunarak len değişkenine atandı.

  for (id=0; id<len; id++)  // id değişkeni 0'dan başlayarak len-1'e kadar arttırılarak for döngüsü başlatıldı.
    cout << *cp++ << " ";   // cp işaretçisinden okunan karakterler (*cp) cout ile ekrana yazdırıldı. cp işaretçisi her seferinde bir sonraki karaktere işaret edecek şekilde artırıldı.

  std::cout << "\n";  // Yeni satır karakteri eklenerek bir satır boşluk bırakıldı.

  return 0;           // Programın başarıyla sonlandığını belirtmek için 0 döndürüldü.
}
