#include <iostream>

class User // "User" adında bir sınıf tanımlar.
{          // Sınıf, üç özel üye değişkeni ve bir genel üye işlevi içerir.
    
    std::string status = " Gold";
                                   // Tek genel üye işlevi, "get_status()" işlevidir ve "status" üye değişkeninin değerini döndürür.
    public:    
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
        }
    
    
};


int main()
{
    User me;  // önceden tanımlanmış "User" sınıfını kullanarak bir "me" kullanıcısı oluşturur
    me.first_name = "Furkan";     // adı ile soyadını ayarlar.
    me.last_name = "Hanilçi";
    
    

    std::cout << "Status:" << me.get_status() << std::endl;
              //  "get_status()" işlevini çağırarak kullanıcının durumunu alır ve "Status:" metni ile birlikte konsola yazdırır.
    return 0;
}

/*

C++ dilinde sınıflar, nesne yönelimli programlama (OOP) prensiplerine uygun olarak tanımlanabilir.
Sınıflar, bir nesne tipi tanımlamak için kullanılan bir araçtır. Sınıflar, verileri ve bu verilere uygulanacak olan işlevleri (yöntemleri) bir arada tutar.

Sınıflarda, erişim kontrolü için bazı anahtar kelimeler kullanılır. Bunlar:

    private: Bu anahtar kelime ile tanımlanan veriler, sadece sınıfın kendisi tarafından erişilebilir. Sınıfın dışındaki kodlar bu verilere erişemez.

    public: Bu anahtar kelime ile tanımlanan veriler ve işlevler, sınıfın dışındaki kodlar tarafından da erişilebilir.

    protected: Bu anahtar kelime ile tanımlanan veriler, sınıfın kendisi ve sınıftan türetilmiş alt sınıflar tarafından erişilebilir. Sınıfın dışındaki kodlar bu verilere erişemez.
    
*/