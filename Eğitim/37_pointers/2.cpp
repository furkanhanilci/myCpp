
#include <iostream>

using namespace std;

int main(void)
{
  int *ip, id; // int bir işaretçi ve değişken bildirimi
  id = 21;
  ip = &id;    // id değişken adresini ip işaretçisine atar.

  // Değişken adını kullanarak id değişken değerini ekrana yazar.
  cout << "id değişken değeri: " << id << "\n";

  // İşaretçi kullanarak id değişken değerini ekrana yazar.
  cout << "id değişken değeri: " << *ip << "\n";

  // Değişken referansını kullanarak id değişken adresini ekrana yazar.
  cout << "id değişken bellek adresi: " << &id << "\n";

  // İşaretçi adını kullanarak id değişken adresini ekrana yazar.
  cout << "id değişken bellek adresi: " << ip << "\n";

  return 0;
}