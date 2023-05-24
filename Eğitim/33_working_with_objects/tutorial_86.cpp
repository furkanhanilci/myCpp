#include <iostream>
#include <vector>


class User  // // "User" adında bir sınıf tanımlar.
         // Sınıf, üç özel üye değişkeni ve bir genel üye işlevi içerir.
{
    
    std::string status = " Gold";

    public:    
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
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

    std::vector<User> users;        // önce "users" vektörünü oluştur
    

    User user1, user2, user3;      // üç farklı kullanıcı ekle

    user1.first_name = "Furkan";   // "User" sınıfından bir nesne oluşturarak adını ve soyadını ayarla
    user1.last_name = "Hanilçi";
    
    user2.first_name = "Hamza";
    user2.last_name = "Cantürk";

    user3.first_name = "Yiğit";
    user3.last_name = "Kuyu";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);int main();
{

    std::vector<User> users;
    

    User user1, user2, user3;

    user1.first_name = "Furkan";
    user1.last_name = "Hanilçi";
    
    user2.first_name = "Hamza";
    user2.last_name = "Cantürk";

    user3.first_name = "Yiğit";
    user3.last_name = "Kuyu";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user;
    user1.first_name = "Furkan";
    user1.last_name = "Hanilçi";

    std::cout << add_user_if_not_exist(users, user) << std::endl;
    std::cout << users.size() << std::endl;

    return 0;
}

    User user;
    user1.first_name = "Furkan";
    user1.last_name = "Hanilçi";

    std::cout << add_user_if_not_exist(users, user) << std::endl;
    std::cout << users.size() << std::endl;

    return 0;
}


 // add_user_if_not_exist fonksiyonu açıklaması. Fonksiyon, verilen "users" vektörüne verilen "user" kullanıcısını ekler, ama kullanıcı zaten vektörde varsa, eklemeyi yapmaz ve sadece kullanıcının indeksini döndürür.
 // Fonksiyon, "for" döngüsü kullanarak vektördeki her bir kullanıcıyı kontrol eder. Eğer vektördeki kullanıcının adı ve soyadı, kontrol edilen "user" kullanıcısının adı ve soyadıyla aynı ise, kullanıcının indeksini döndürür.
 // Eğer vektördeki hiçbir kullanıcının adı ve soyadı, kontrol edilen "user" kullanıcısının adı ve soyadıyla eşleşmiyorsa, kullanıcıyı vektöre ekler ve vektörün son indeksini döndürür.
 // "push_back()" işlevini kullanarak vektöre yeni bir kullanıcı ekler ve "users.size() - 1" ifadesiyle vektörün son indeksini döndürür.
