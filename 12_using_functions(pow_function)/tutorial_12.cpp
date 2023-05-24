#include <iostream>
#include <cmath> // pow gibi matematik fonksiyonlarını kullanabilmek için.

using std::cout;
using std::cin;

int main()
{
    int base, exponent;
    cout << "What is the base ?";
    cin >> base; // Take input to "base" variable
    cout << "What is the exponent";
    cin >> exponent;
    double power = pow(base,exponent); // pow fonksiyonu base'in exponent derecesini hesaplar ve power değişkenine atar.
    cout << power;

    
}
 
/*

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main()
{
    int base, exponent; // base ve exponent değişkenleri tanımlandı.
    double power; // power değişkeni tanımlandı.
    cout << "What is base?";
    cin >> base; // base değişkeni için input alınır.
    cout << "What is exponent";
    cin >> exponent;
    power = pow(base,exponent); //  pow fonksiyonunun sonucu power değişkenine atandı.
    cout << power << ::std::endl; 
}

*/