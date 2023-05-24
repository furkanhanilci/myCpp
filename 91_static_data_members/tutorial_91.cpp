#include <iostream>
#include <vector>


class User // User adında bir sınıf tanımlar.
{
    static int user_count;        // User sınıfı, user_count adında bir static int özelliğine de sahiptir.
                                  // Bu özellik, kaç tane User objesi oluşturulduğunu sayar. get_user_count() metodu ise bu sayıyı döndürür.
    std::string status = " Gold"; //  status özelliği kullanıcının üyelik statüsünü (Gold, Silver, Bronze) tutar.
 
    public:    
        static int get_user_count()
        {
            return user_count;
        }
        std::string first_name;
        std::string last_name;
        std::string get_status()  // get_status() metodu ise bu üyelik statüsünü döndürür.
        {
            return status;
        }
        
        void set_status(std::string status)  // set_status() metodu ise kullanıcının üyelik statüsünü değiştirir.
        {
            if(status == "Gold" || status == "Silver" || status == "Bronze")
            {
            this->status = status;
            }
            else
            {
            this->status = "No Status";
            }
        }
                // Sınıfın yapıcısı (constructor) 2 tane bulunur. 
                // Birincisi parametre almayan bir yapıcıdır. Bu yapıcı çağrıldığında user_count özelliği bir arttırılır.
        User()
        {
            user_count++;
        }

        User(std::string first_name, std::string last_name, std::string status) // İkinci yapıcı ise first_name, last_name, ve status parametreleri alır. Bu yapıcı çağrıldığında da user_count özelliği bir arttırılır.
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
            user_count++;
        }
        

        ~User() // Sınıfın yıkıcısı (destructor) ise bir User objesi yok edildiğinde çağrılır. Yıkıcı, user_count özelliğini bir azaltır.
        {
            user_count--;
        }
    
    
};

int User::user_count = 0;

int add_user_if_not_exist(std::vector<User> &users, User user) //  bir vektörde bir kullanıcının olup olmadığını kontrol eder. Eğer kullanıcı listede yoksa, vektöre eklenir ve yeni eklenen kullanıcının pozisyonu döndürülür.
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

int main() // User sınıfının farklı özelliklerini ve davranışlarını test etmek için kullanılır. 
           // İlk olarak, 5 tane kullanıcı nesnesi oluşturulur ve get_user_count() fonksiyonu ile toplam kullanıcı sayısı yazdırılır.
{          // Ardından, bir kullanıcı nesnesinin imhası gerçekleştirilir (explicit destructor çağrısı), ve tekrar kullanıcı sayısı yazdırılır.

    User user, user1, user2, user3, user4;
    std::cout << User::get_user_count() << std::endl;
    user.~User();
    std::cout << User::get_user_count() << std::endl; 
    
}


/*

Bu kod örneğinde, "static int" kullanımı User sınıfı içerisinde "user_count" isimli bir değişken oluşturur.
Bu değişken sınıfın tüm örnekleri tarafından paylaşılır. Yani, bir nesne oluşturulduğunda, "user_count" değeri bir arttırılır ve bu değer diğer nesneler tarafından da görülebilir.
Yine aynı şekilde, bir nesne yok edildiğinde, "user_count" değeri bir azaltılır ve bu azaltma işlemi yine diğer nesneler tarafından da görülebilir.

"get_user_count()" fonksiyonu ise sınıfın static olan "user_count" özelliğine erişerek, kaç adet nesne oluşturulduğunu gösterir.
Bu fonksiyon, sınıfın örnekleri tarafından kullanılabileceği gibi, sınıf ismi kullanılarak da çağrılabilir.

Bu örnek kodda, static değişken kullanımı ile sınıfın örnekleri arasında paylaşılan bir değer oluşturulmuştur. Bu değer, örneklerin sayısını takip etmek için kullanılmıştır.

*/