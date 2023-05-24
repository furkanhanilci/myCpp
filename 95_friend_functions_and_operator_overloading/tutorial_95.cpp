#include <iostream> // standart giriş çıkış kütüphanesi
#include <vector> // dinamik boyutlu diziler için kütüphane
#include <string> // string veri tipi için kütüphane

class User // kullanıcı sınıfı
{
    static int user_count; // sınıf değişkeni olarak kullanıcı sayısını tutan değişken
    std::string status = " Gold"; // kullanıcının üyelik statüsünü tutan string değişkeni, varsayılan değeri "Gold" 

public:
    static int get_user_count() // sınıf fonksiyonu olarak toplam kullanıcı sayısını döndüren fonksiyon
    {
        return user_count;
    }

    std::string first_name; // kullanıcının adını tutan string değişkeni
    std::string last_name; // kullanıcının soyadını tutan string değişkeni

    std::string get_status() // kullanıcının üyelik statüsünü döndüren fonksiyon
    {
        return status;
    }
        
    void set_status(std::string status) // kullanıcının üyelik statüsünü değiştiren fonksiyon
    {
        if(status == "Gold" || status == "Silver" || status == "Bronze") // eğer kullanıcının üyelik statüsü "Gold", "Silver" veya "Bronze" ise
        {
            this->status = status; // kullanıcının üyelik statüsü değiştirilir
        }
        else // değilse
        {
            this->status = "No Status"; // kullanıcının üyelik statüsü "No Status" olarak ayarlanır
        }
    }

    User() // varsayılan yapıcı fonksiyon, kullanıcının sayısını bir artırır
    {
        user_count++;
    }

    User(std::string first_name, std::string last_name, std::string status) // yapıcı fonksiyon, kullanıcının adı, soyadı ve üyelik statüsünü ayarlar, ayrıca kullanıcı sayısını bir artırır
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
        user_count++;
    }
        
    ~User() // yıkıcı fonksiyon, kullanıcı sayısını bir azaltır
    {
        user_count--;
    }

    friend std::ostream& operator << (std::ostream& output, const User& user); // kullanıcı sınıfının verilerini çıktı olarak yazdırmak için arkadaş fonksiyon
    friend std::istream& operator >> (std::istream &input, User &user); // kullanıcı sınıfının verilerini girdi olarak okumak için arkadaş fonksiyon
};

int User::user_count = 0;

std::ostream& operator << (std::ostream& output, const User& user)
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name << "\nStatus: " << user.status;
    return output;
}

std::istream& operator >> (std::istream &input, User &user)
{
    input >> user.first_name >> user.last_name >> user.status;
    return input;
}

int main()
{
    User user;
    std::cin >> user;
    std::cout << user << std::endl;
    return 0;
}

int User::user_count = 0; // kullanıcı sayısını tutan sınıf değişkeni, başlangıç değeri 0

std::ostream& operator << (std::ostream& output, const User& user) // kullanıcının verilerini çıktı olarak yazdırmak için aşırı yüklenmiş çıkış işleci
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name << "\nStatus: " << user.status; // kullanıcının adını, soyadını ve üyelik statüsünü çıktı olarak yazdırır
    return output; // çıktıyı geri döndürür
}

std::istream& operator >> (std::istream &input, User &user) // kullanıcının verilerini girdi olarak okumak için aşırı yüklenmiş girdi işleci
{
    input >> user.first_name >> user.last_name >> user.status; // kullanıcının adını, soyadını ve üyelik statüsünü girdi olarak okur
    return input; // girdiyi geri döndürür
}

int main() // programın başlangıç noktası
{
    User user; // kullanıcı nesnesi oluşturulur
    std::cin >> user; // kullanıcının verileri kullanıcıdan alınır
    std::cout << user << std::endl; // kullanıcının verileri çıktı olarak yazdırılır
    return 0; // programın başarıyla sonlandığını belirtir
}



/*

C++ programlama dilinde "friend" kelimesi, bir sınıfın özel üye fonksiyonlarına diğer sınıfların erişimine izin vermek için kullanılır.
Bir sınıfın "friend" fonksiyonu, diğer sınıfların özel (private) veri elemanlarına erişebilir.

Bir sınıfın özel (private) veri elemanları, sınıfın tanımlandığı blokta (scope) ve sınıfın üye fonksiyonları içinde erişilebilir.
Ancak, diğer sınıfların özel veri elemanlarına erişmeleri mümkün değildir.
Bununla birlikte, bir sınıfın özel veri elemanlarına erişmek isteyen başka bir sınıfın üye fonksiyonu "friend" olarak tanımlanarak bu erişim sağlanabilir.

Bir sınıfın üye fonksiyonu "friend" olarak tanımlanırken, friend anahtar kelimesi kullanılır ve fonksiyon tanımı sınıf tanımı içinde yer almaz.
"friend" fonksiyonu, tanımlandığı sınıfın özel veri elemanlarına erişebilir, ancak sınıfın diğer üyelerine erişemez.

"friend" anahtar kelimesi, özellikle veri gizliliğinin korunması gereken durumlarda kullanışlıdır.
Bununla birlikte, "friend" fonksiyonlarının kullanımı, diğer sınıfların sınıfın özel veri elemanlarına doğrudan erişmesi yerine "sınıf aracılığıyla" erişmesi gereken durumlarda sınırlı tutulmalıdır.
Bu, sınıfın yapısı ve bütünlüğünü korumaya yardımcı olacaktır.


*/