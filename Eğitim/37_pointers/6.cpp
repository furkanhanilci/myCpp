#include <iostream>  // Girdi/Çıktı işlemleri için kütüphane dahil edildi.

using namespace std; // std isim alanı kullanılacak.

int main(void)       // Programın ana fonksiyonu olan main tanımlandı.
{
  int *ip;          // Bir işaretçi (pointer) tanımlandı.
  int idizi[5] = { 5, 17, 21, 34, 46 };  // 5 elemanlı bir tamsayı dizisi tanımlandı ve ilk değerler atandı.
  int id;           // Bir tamsayı değişkeni tanımlandı.

  cout << "İşaretçi bellek adresi: " << &ip << "\n\n";  // İşaretçinin bellek adresi ekrana yazdırıldı.

  ip = idizi;       // ip işaretçisi, idizi dizisinin başlangıç adresine eşitlendi. Bu, ip = &idizi[0]; ile aynıdır.

  for (id=0; id<5; id++, ip++) {  // id değişkeni 0'dan başlayarak 5'e kadar arttırılarak for döngüsü başlatıldı. ip işaretçisi de her adımda bir sonraki elemana işaret edecek şekilde artırıldı.
       cout << "İşaretçinin içerdiği bellek adresi: " << ip << " " << &idizi[id] << "\n";  // ip işaretçisinin gösterdiği bellek adresi ve idizi dizisinin ilgili elemanının bellek adresi ekrana yazdırıldı.
       cout << "İşaretçinin gösterdiği değişken değeri: " << *ip << " " << idizi[id] << "\n\n"; // ip işaretçisinin gösterdiği değişkenin değeri ve idizi dizisinin ilgili elemanının değeri ekrana yazdırıldı.
  }

  return 0;           // Programın başarıyla sonlandığını belirtmek için 0 döndürüldü.
}
