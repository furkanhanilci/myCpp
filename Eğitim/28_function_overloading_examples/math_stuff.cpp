#include <iostream>

struct Rectangle   // struct = a custom data type daha sonra hakkında detaylıca konuşulacak.
{
    double lenght;
    double width;
};

double area(double lenght, double width)
{
    return lenght * width;
}

int main()
{
    Rectangle rectangle;
    rectangle.lenght = 10;
    rectangle.width = 10;
    std::cout << area(rectangle.lenght, rectangle.width) << std::endl;

    return 0;
}


// Bu kod, dikdörtgenin alanını hesaplamak için bir Rectangle yapısı (struct) ve alan fonksiyonunu içerir.
// Rectangle yapısı iki double türünden değişken içerir: length (uzunluk) ve width (genişlik).
// Alan fonksiyonu, dikdörtgenin uzunluğu ve genişliği parametreleri olarak alır ve bu değerleri kullanarak dikdörtgenin alanını hesaplar.
// Main fonksiyonu, Rectangle yapısından bir nesne (rectangle) oluşturur ve uzunluk ve genişlik değerlerini atanır.
// Daha sonra, alan fonksiyonu, rectangle nesnesinin uzunluğu ve genişliği parametreleri olarak çağrılır ve sonuç dikdörtgenin alanı olarak ekrana yazdırılır.

// Structs, C++ dilinde benzersiz (custom) veri tipleri tanımlamak için kullanılabilir 
// ve fonksiyonlar, parametreler ve işlemlerle birleştirilerek programlamada kullanılabilir.