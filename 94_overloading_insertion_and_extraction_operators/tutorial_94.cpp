#include <iostream>
#include <vector>


class User // User sınıfını tanımlar. Bu sınıf, kullanıcı adı, soyadı ve statüsü gibi özellikleri olan bir kullanıcıyı temsil eder.
{
    static int user_count; // kullanıcı nesnelerinin sayısını izlemek için kullanılan static integer değişken tanımlandı.
    std::string status = " Gold"; // Bu değişken, kullanıcının statüsünü temsil eder ve varsayılan olarak "Gold" olarak ayarlanmıştır. 
 
    public:    
        static int get_user_count()
        {
            return user_count;
        }
        std::string first_name; // Sınıfın diğer özellikleri, first_name ve last_name adlı iki string değişkendir.
        std::string last_name;
        std::string get_status() // get_status() fonksiyonu, kullanıcının mevcut statüsünü döndürür
        {
            return status;
        }
        
        void set_status(std::string status) // set_status() fonksiyonu, belirli bir statüyü kabul eder ve bu statüyü, "Gold", "Silver" veya "Bronze" dışındaki statüler girişlerde "No Status" olarak ayarlar.
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

        User()
        {
            user_count++;
        }

        User(std::string first_name, std::string last_name, std::string status)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
            user_count++;
        }
        

        ~User()
        {
            user_count--;
        }
    
    
};

int User::user_count = 0;

int add_user_if_not_exist(std::vector<User> &users,const User user)
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

std::ostream& operator << (std::ostream& output, User user)
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name;
    return output;
}

std::istream& operator >> (std::istream &input, User &user)
{
    input >> user.first_name >> user.last_name;
    return input;
}

int main()
{
    User user;
    std::cin >> user.first_name >> user.last_name;
    /*
    user.first_name = "Furkan";
    user.last_name = "Hanilçi";
    user.set_status("Gold");
    */

    std::cout << user << std::endl;

 
    
}