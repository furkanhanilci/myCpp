#include <iostream>

using namespace std;

int main(void)
{
  int *ip1, *ip2, id1, id2;

  ip1 = &id1; // id1 değişkeninin adresini ip1 işaretçisine atama
  ip2 = &id2; // id2 değişkeninin adresini ip2 işaretçisine atama
  id1 = 42;   // id1 değişkenine değer atama
  *ip2 = 67;  // id2 değişkenine ip2 işaretçisi yoluyla değer atama

  cout << "id1 değişkeninin değeri: " << *ip1 << "\n";
  cout << "id2 değişkeninin değeri: " << *ip2 << "\n";
  cout << "id1 değişkeninin bellek adresi: " << ip1 << "\n";
  cout << "id2 değişkeninin bellek adresi: " << ip2;

  cout << "\n\n";

  cout << "ip1 işaretçisinin bellek adresi: " << &ip1 << "\n";
  cout << "ip2 işaretçisinin bellek adresi: " << &ip2 << "\n";

  return 0;
}