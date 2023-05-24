#include <iostream>

double squared(double x)
{
    return x * x;
}

int main()    // squared fonksiyonu doğru şekilde çalışıyor mu test etmek için main fonkisyonu içinde deniyoruz.
{
    if(squared(-5) == 25)
    {
        std::cout << "Test Passed\n";   // 25 çıktısını verdiği için test başarılı
    }

    return 0;

}