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
    Nesneye yönelik programlama (OOP) çalışma sistemi sınıflar içinde yer alan iki temel kavram üzerinde şekillenir:
        1. Değişkenler (veriler): OOP ile geliştirilen uygulamalarda ihtiyaç duyulan farklı türden değişkenler sınıf içinde tanımlanır.
        2. Değişkenlere işlem yapan fonksiyonlar (metodlar): OOP ile geliştirilen uygulamalarda sınıf içinde tanımlanan değişkenlere işlem yapmak üzere fonksiyonlar içinde kodlar tanımlanır.

    Sınıf (Class) bildirimi:
        Bir nesne oluşturmadan önce, class anahtar kelimesini kullanarak nesnenin tüm özellik (değişkenler) ve davranışlarını (fonksiyonlar) gösteren genel yapısını tanımlamamız gerekir.
        Sınıflar class anahtar kelimesi ile oluşturulur. 
        Bir sınıf oluşturulduğunda, sınıf içindeki değişkenlere yine sınıf içindeki fonksiyonların işlem yapmasını sağlayan yeni bir veri türü tanımlanmış olur.
        Sınıf adı verilen bu yeni veri türü oluşturulduktan sonra, bu sınıfa ait nesne bildirimi yapılır. Bu işlem, int bir veri türünden değişken tanımlamaya benzer.

    Bir sınıf bildiriminin genel yapısı aşağıda gösterilmektedir:
    
                        class sınıf-adı {
                // private veri ve fonksiyonlar
                private:   
                    veri-türü değişken_adı;
                    .
                    .
                    veri-türü değişken_adı;
                
                    veri-türü fonksiyon_adı (veri-türü);
                    .
                    .
                    veri-türü fonksiyon_adı (veri-türü);
                    
                // protected veri ve fonksiyonlar
                protected:
                    veri-türü değişken_adı;
                    .
                    .
                    veri-türü değişken_adı;
                
                    veri-türü fonksiyon_adı (veri-türü);
                    . 
                    .
                    veri-türü fonksiyon_adı (veri-türü);

                // public veri ve fonksiyonlar
                public:
                    veri-türü değişken_adı;
                    .
                    .
                    veri-türü değişken_adı;
                
                    veri-türü fonksiyon_adı (veri-türü);
                    . 
                    .
                    veri-türü fonksiyon_adı (veri-türü);	 

                } nesne/nesne-listesi; // İsteğe bağlı olarak tanımlanır.


    OOP ile geliştirilen uygulamalarda program içinde, veriler ile verilere işlem yapacak olan fonksiyonlar (metodlar) sınıf (class) adı verilen yapıların içinde tanımlanır.
    Sınıf tanımlandıktan sonra bu sınıf türünden bir değişken (nesne) oluşturularak, bu nesne yoluyla sınıf içinde yer alan tüm değişken ve fonksiyonlara erişim sağlanır.

    C++ dilinde sınıflar, nesne yönelimli programlama (OOP) prensiplerine uygun olarak tanımlanabilir.
    Sınıflar, bir nesne tipi tanımlamak için kullanılan bir araçtır. Sınıflar, verileri ve bu verilere uygulanacak olan işlevleri (yöntemleri) bir arada tutar.

    Sınıflarda, erişim kontrolü için bazı anahtar kelimeler kullanılır. Bunlar:

    private: Bu anahtar kelime ile tanımlanan veriler, sadece sınıfın kendisi tarafından erişilebilir. Sınıfın dışındaki kodlar bu verilere erişemez.

    public: Bu anahtar kelime ile tanımlanan veriler ve işlevler, sınıfın dışındaki kodlar tarafından da erişilebilir.

    protected: Bu anahtar kelime ile tanımlanan veriler, sınıfın kendisi ve sınıftan türetilmiş alt sınıflar tarafından erişilebilir. Sınıfın dışındaki kodlar bu verilere erişemez.
    
*/