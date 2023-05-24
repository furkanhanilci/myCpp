#include <iostream>

struct User  // User" adında bir struct (yapı) tanımlar. Bu yapı, bir kullanıcının adını, soyadını ve  durumunu (status) içerir.
{
    std::string first_name;  // Bu ifadeler, "User" yapı içindeki üye değişkenleri (member variable) tanımlar.
    std::string last_name;
    std::string get_status() // "status" değişkeninin değerini döndürür. Bu fonksiyon, "User" yapı içinde tanımlı bir üye fonksiyondur (member function).
    {
        return status;
    }
    
    private:        // private: anahtar kelimesi, "status" değişkeninin özel olmasını ve yalnızca "User" yapısı içindeki fonksiyonların erişebilmesini belirtir. 
                    // Yani, "status" değişkeni yalnızca "get_status()" fonksiyonu gibi "User" yapısının üye fonksiyonları tarafından erişilebilir. Bu, veri gizliliği ve güvenliği sağlar.
        std::string status = "Gold";
};                                         // Bu şekilde, "User" yapısı, bir kullanıcının adını, soyadını ve hesap durumunu saklar ve "get_status()" fonksiyonu aracılığıyla hesap durumunu döndürür.


int main()   // "main()" fonksiyonunu tanımlar. Bu fonksiyon, "User" yapısını kullanarak bir kullanıcı oluşturur ve kullanıcının adını, soyadını ve hesap durumunu belirler.
{
    User me; // "User" yapısından bir nesne oluşturur ve "me" adını verir.
    me.first_name = "Furkan";
    me.last_name = "Hanilçi";
    

    std::cout << "Status:" << me.get_status() << std::endl; // ifadesi, "me" nesnesinin "get_status()" fonksiyonunu çağırır ve "Status: Gold"  mesajını yazar.

    return 0;
}