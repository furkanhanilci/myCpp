#include <iostream>
#include <string>

template<typename T>  //  "T" tipinde bir veri tipi kullanacağımızı belirtir ve fonksiyonu "jenerik" hale getirir. Bu, fonksiyonun farklı veri tipleriyle kullanılabilmesini sağlar.

void swap(T &a, T &b) // "swap" adında bir fonksiyon tanımlar. Bu fonksiyon, iki adet T tipinde referans alır ve bu referanslardaki değerleri değiştirir.
{

    T temp = a;       // a" parametresinin değerini "temp" adında geçici bir değişkene atar.
    a = b;            // "a" parametresinin değerini "b" parametresinin değeriyle değiştirir.
    b = temp;         // "b" parametresinin değerini önceki "a" değeriyle değiştirir, yani "a" ve "b" parametrelerinin değerleri yer değiştirir.

}

template<typename T>

void swap (T a[], T b[], int size) // "swap" adında bir fonksiyon tanımlar. Bu fonksiyon, iki T tipinde dizi(array) alır ve bu dizilerin elemanlarını yer değiştirir.
{                                  // "size" ise dizilerin boyutunu belirtir.
    for(int i = 0; i < size; i++)  //  Bu döngü ve i değişkeni 0'dan başlayarak size-1'e kadar arttırılır.
    {
        T temp = a[i];             // Her bir döngü adımında, "temp" adında geçici bir değişken oluşturulur ve bu değişkene "a[i]" değeri atanır. 
                                   // Daha sonra "a[i]" değeri "b[i]" ile değiştirilir ve "b[i]" değeri de önceki "a[i]" değeriyle değiştirilir. 
                                   // Bu, "a[]" ve "b[]" dizilerinin elemanlarının yer değiştirmesini sağlar.
        a[i] = b[i];
        b[i] = temp;
    }
}

int main()
{
    int a = 10;
    int b = 20;

    swap(a,b);
    std::cout << "a: " << a << "\tb:" << b << "\n";    

    std::string first_name = "Furkan";
    std::string last_name = "Hanilçi";

    std::cout << first_name << " " << last_name << std::endl;

    int const SIZE = 6;
    int nines[] = {9, 9, 9, 9, 9, 9};
    int ones[] = {1, 1, 1, 1, 1, 1};
    

    for(int i = 0; i < SIZE; i++)
    {
        std::cout << nines[i] << " " << ones[i] << "\t";
    }

    std::cout << "\n\n";

    for(int i = 0; i < SIZE; i++)
    {
        std::cout << nines[i] << " " << ones[i] << "\t";
    }

    std::cout << "\n\n";

    swap(nines, ones, SIZE);

    return 0;
}




// void swap(T &a, T &b) ifadesi, "swap" fonksiyonunun parametrelerini tanımlar.
// "&" sembolü, "a" ve "b" parametrelerinin referans olarak alındığını belirtir. Bu da, değiştirilen değerlerin orijinal hallerinde de değişiklik yapılacağı anlamına gelir.