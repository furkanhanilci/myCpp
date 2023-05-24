#include <iostream>
#include <vector>


class User // "User" adında bir sınıf tanımlıyor. Bu sınıf, bir kullanıcıyı temsil ediyor.
{
    
    std::string status = " Gold";

    public:    // "User" sınıfında üç adet özellik tanımlanmıştır: "first_name" (ilk isim), "last_name" (soyadı) ve "status" (durumu). "status" özelliği, varsayılan olarak "Gold" değerine atanır.
        
        std::string first_name;
        std::string last_name;
        std::string get_status() // getter. Sınıfın "get_status" adında bir fonksiyonu vardır. 
                                 // Bu fonksiyon, "status" özelliğinin değerini döndürür ve dışarıdan erişime açıktır (getter).
        {
            return status;
        }
        
        void set_status(std::string status)  // setter. sınıfın "set_status" adında bir başka fonksiyonu vardır.
                                             // Bu fonksiyon, "status" özelliğinin değerini belirlemek için kullanılır (setter).
        {
            if(status == "Gold" || status == "Silver" || status == "Bronze")
            {
            this->status = status;
            }
            else
            {
            this->status = "No Status";
            }                              // Fonksiyon, "Gold", "Silver" veya "Bronze" değerleriyle sınırlı olmak üzere geçerli bir "status" değeri alır ve özelliğin değerini buna göre ayarlar.
                                           // Geçersiz bir değer alırsa, "No Status" değeri atanır.
        }

        User()                //Sınıfın iki adet yapıcı metodu bulunmaktadır. Birincisi, hiçbir argüman almaz ve boş bir kullanıcı oluşturur. 
        
        {

        }

        User(std::string first_name, std::string last_name, std::string status) // //İkincisi,  isim, soyisim ve kullanıcının durumunu belirten argümanları alır ve yeni bir kullanıcı oluşturur.
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
        }
        

        ~User() // Son olarak, sınıfın bir yıkıcı metodu vardır. Bu metod, sınıf nesnesi bellekten kaldırıldığında otomatik olarak çağrılır ve "Destructor" mesajını yazdırır.
        {
            std::cout << "Destructor\n";
        }
    
    
};

int add_user_if_not_exist(std::vector<User> &users, User user)
{
    for(int i = 0; i < users.size(); i++)
    {
        if(users[i].first_name == user.first_name && users[i].last_name == user.last_name)
        {
            return i;
        }
        
    }
    users.push_back(user);
    return users.size() - 1;
}

int main()
{

    User user;
    user.set_status("Tacos");
    std::cout << user.get_status() << std::endl;

    
}

/*

Setter ve getter fonksiyonları sınıfın özel üye değişkenlerinin değerlerini ayarlamak ve almak için kullanılan fonksiyonlardır.

Setter fonksiyonları, bir sınıfın özel üye değişkenlerinin değerlerini ayarlamak için kullanılır. 
Bu fonksiyonlar, sınıfın özel üye değişkenlerine erişimi kontrol etmek ve verilerin kontrol edilmiş ve tutarlı bir şekilde ayarlanmasını sağlamak için kullanılır.

Getter fonksiyonları ise, bir sınıfın özel üye değişkenlerinin değerlerini almak için kullanılır.
Bu fonksiyonlar, sınıfın özel üye değişkenlerine erişimi kontrol etmek ve verilerin kontrol edilmiş ve tutarlı bir şekilde alınmasını sağlamak için kullanılır.

*/