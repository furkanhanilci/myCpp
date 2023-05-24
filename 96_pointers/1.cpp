#include <iostream>

using namespace std;

int main(void)
{
  int *ip, id; // int bir işaretçi ve değişken tanımlanması.
  id = 21;
  ip = &id;    // id değişken adresini ip işaretçisine atar.
  
  cout << "id değişken değeri: " << *ip; // İşaretçi kullanarak id değişken değerini ekrana yazar.

  return 0;
}
