#include <iostream>  // iostream kütüphanesi dahil ediliyor

using namespace std;  // std namespace kullanılıyor

int main(void)  // main fonksiyonu başlıyor
{
  int *ip, id;  // bir işaretçi ve bir tam sayı değişkeni tanımlanıyor

  id = 274;  // id değişkenine 274 değeri atanıyor

  ip = &id;  // ip işaretçisi id değişkeninin bellek adresini tutacak şekilde ayarlanıyor

  cout << "id değişken değeri: " << id << "\n";  // id değişkeninin değeri ekrana yazdırılıyor

  (*ip)++;  // ip işaretçisi ile gösterilen bellekteki değer 1 artırılıyor

  cout << "id değişken değeri: " << id << "\n";  // id değişkeninin yeni değeri ekrana yazdırılıyor

  return 0;  // program sonlandırılıyor
}
