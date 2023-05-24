#include <iostream>
#include <vector>


class User // "User" sınıfını tanımlar.
{           // sınıfın özellikleri "first_name", "last_name" ve "status" olmak üzere üç adet "string" veri tipidir.
    
    std::string status = " Gold";

    public:         
        std::string first_name;
        std::string last_name;
        std::string get_status() // "get_status()" fonksiyonu, "status" özelliğini döndürür.
        {
            return status;
        }
    // Sınıf ayrıca bir yapıcı("constructor") ve bir yıkıcı("destructor") metoda sahiptir. Yapıcı, sınıfın özelliklerini başlatmak için kullanılır. Yıkıcı, sınıf örneği bellekten silindiğinde çağrılır.    
    // Yapıcı, üç parametre alır: "first_name", "last_name" ve "status". Bu parametreler sınıfın özelliklerine atanır. 
        User(std::string first_name, std::string last_name, std::string status)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
        }
        ~User()
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
    
    User user("Furkan", "Hanilçi", "Silver");
    std::cout << user.get_status() << std::endl;

    
}

// bir "main()" fonksiyonu tanımlar. Fonksiyon, bir "User" nesnesi oluşturur ve nesnenin durumunu ("status") ekrana yazdırır.

// "Nesne oluşturma" adımında, "User" sınıfının yapılandırıcısı ("constructor") kullanılır. "User" sınıfının yapılandırıcısı, "first_name", "last_name" ve "status" özelliklerini başlatır ve nesneye değerler atar.

// "Ekrana yazdırma" adımında, "get_status()" fonksiyonu kullanılarak "User" nesnesinin "status" özelliği ekrana yazdırılır.

// Sonuç olarak, kod "Silver" çıktısı verecektir, çünkü "User" nesnesinin yapılandırıcısı, "status" özelliğini "Silver" olarak başlatır ve "get_status()" fonksiyonu bu değeri döndürür.
