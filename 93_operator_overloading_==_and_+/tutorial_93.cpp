#include <iostream>


class Position // bir sınıf tanımlanmış: "Position".
               // Bu sınıf iki tamsayı verisi içerir: "x" ve "y".
{
    public:
    int x = 10;
    int y = 20;
    Position operator + (Position pos) // "operator +", "Position" türündeki bir nesneye "pos" nesnesini ekleyen bir işlemci işlevi tanımlar.
    {
        Position new_pos;
        new_pos.x = x + pos.x;
        new_pos.y = y + pos.y;
        return new_pos;
    }
    
    bool operator == (Position pos) // "operator ==" işlemcisi, "pos" nesnesinin "x" ve "y" değerlerinin, parametre olarak verilen "Position" nesnesinin "x" ve "y" değerleriyle aynı olup olmadığını kontrol eder ve doğruysa "true" değeri döndürür, değilse "false" değeri döndürür.



    {
        if(x == pos.x && pos.y)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Position pos1, pos2; // Position adında bir sınıf tanımlar.Bu sınıf, x ve y adında iki tam sayı değişkenine sahiptir. Ayrıca, + ve == operatörlerini aşırı yüklenmiştir.(overloading)
    Position pos3 = pos1 + pos2;   // pos3 değişkeni, pos1 ve pos2 nesnelerinin toplamı olarak tanımlanır. 
    std::cout << pos3.x << " " << pos3.y << std::endl;
    pos2.x = 30;   // Daha sonra pos2 nesnesinin x değeri 30 olarak değiştirilir.

    if(pos1 == pos2)  // pos1 ve pos2 nesneleri == operatörü ile karşılaştırılır ve They are the same ! mesajı yazdırılır.
    {
        std::cout << "They are the same !\n";
    }

    return 0;
}
