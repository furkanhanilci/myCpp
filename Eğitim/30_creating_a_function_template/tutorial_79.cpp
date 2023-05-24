#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)   // Template ile fonksiyon içinde parametre olarak alınacak değerlerin tipini kısıtlamıyoruz,tiplerin aynı olması yeterli
{

    T temp = a;
    a = b;
    b = temp;

}

/*
void swap(std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;
}
*/

int main()
{
    int a = 10;
    int b = 20;

    swap(a,b);
    std::cout << "a: " << a << "\tb:" << b << "\n";    

    std::string first_name = "Furkan";
    std::string last_name = "Hanilçi";
    
    swap(first_name, last_name);
    std::cout << first_name << " " << last_name << std::endl;
  
    return 0; // hem isimler hem de sayılar için aynı fonksiyonu kullanabildik.
}


// Program, swap() adlı bir template fonksiyon tanımlar.
// Template ile fonksiyon içinde parametre olarak alınacak değerlerin tipini kısıtlamıyoruz, tiplerin aynı olması yeterli.
// swap() fonksiyonu, T türündeki a ve b değişkenleri arasında değerleri takas eder.
// main() fonksiyonu, önce int türünde a ve b değişkenleri oluşturur ve bunlara sırasıyla 10 ve 20 değerlerini atar. Daha sonra, swap() fonksiyonunu çağırarak a ve b değerlerinin yerlerini değiştirir ve sonuçları ekrana yazar.
// Ardından, std::string türünde first_name ve last_name değişkenleri oluşturur ve bunlara sırasıyla "Furkan" ve "Hanilçi" değerlerini atar. Daha sonra, swap() fonksiyonunu çağırarak first_name ve last_name değerlerinin yerlerini değiştirir ve sonuçları ekrana yazar.

// Bu örnekte template kullanarak aynı işlevselliği farklı türler için sağlamak için nasıl kullanılacağını görmüş olduk.