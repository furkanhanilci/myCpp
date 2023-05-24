#include <iostream>

void swap(int &a, int &b) // swap isimli bir fonksiyon oluşturduk ve int türünden 2 parametre alır.
{                         // & olarak tanımladık çünkü pass by reference olabilmesi için.

    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\tb:" << b << "\n";
}



int main()
{
    int a = 10;
    int b = 20;

    swap(a,b);

    std::cout << "a: " << a << "\tb:" << b << "\n";    

    return 0;
}


//  Bu kod  iki sayının değerlerini değiştiren bir swap fonksiyonu tanımlar ve 
//  bu fonksiyonu kullanarak main fonksiyonunda iki değişkenin değerini değiştirir.
//  Fonksiyon, iki tamsayı (a ve b) için referans olarak tanımlanmış parametreler alır (& ile )
//  ve bu sayıların değerlerini değiştirir.
//  Fonksiyon içindeki geçici bir değişken kullanılarak değerler takas edilir.
//  Fonksiyon, sonuç olarak değiştirilmiş değerleri yazdırır.
//  Main fonksiyonunda ise önce a ve b değişkenleri tanımlanır ve değerleri atanır. Sonra swap fonksiyonu bu değişkenlerle çağrılır ve a ile b'nin değerleri değiştirilir. 
//  Son olarak, main fonksiyonu değiştirilmiş değerleri yazdırır.

// swap fonksiyonu içinde yapılan değişiklikler, a ve b'nin değerlerinin fonksiyondan çıktıktan sonra da kalıcı olması için fonksiyonda referans parametreleri kullanır. 
// Bu nedenle, swap fonksiyonu tarafından yapılan değişiklikler, main fonksiyonu tarafından erişilebilir ve kullanılabilir.