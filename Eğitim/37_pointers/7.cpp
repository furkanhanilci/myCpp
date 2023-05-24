#include <iostream>
using namespace std;

int main(void)
{
  // 1. Adım: Bir tamsayı işaretçisi olan "ip" ve bir tamsayı dizisi olan "idizi" tanımlanır.
  int *ip;
  int idizi[5] = { 15, 72, 154, 298, 345 };

  // 2. Adım: İşaretçi bellek adresi ekrana yazdırılır.
  cout << "İşaretçi bellek adresi: " << &ip << "\n\n";

  // 3. Adım: İşaretçi, "idizi" dizisinin son elemanının bellek adresi ile eşitlenir.
  ip = &idizi[4];

  // 4. Adım: İşaretçinin gösterdiği bellek adresi ve değeri ekrana yazdırılır.
  cout << "İşaretçinin içerdiği adres: " << ip << "\n";
  cout << "İşaretçinin gösterdiği değişken değeri: " << *ip << "\n\n";

  // 5. Adım: İşaretçi, iki eleman geriye doğru kaydırılır (ip-=2).
  ip -= 2; // Alternatif olarak: ip -= (2 * sizeof(int));

  // 6. Adım: İşaretçinin gösterdiği bellek adresi ve değeri ekrana yazdırılır.
  cout << "İşaretçinin içerdiği adres: " << ip << "\n";
  cout << "İşaretçinin gösterdiği değişken değeri: " << *ip << "\n";

  // 7. Adım: Program sonlandırılır.
  return 0;
}
